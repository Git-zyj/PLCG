/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231813
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65093)) : (((int) var_13))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) != (175672558U)))) : (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_2))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) arr_4 [i_1]);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) (~(arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 3])));
                        var_18 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_7))))));
                        var_19 &= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_3])) | ((+(((/* implicit */int) (short)-25490))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_13)))))));
                    }
                } 
            } 
        }
        for (signed char i_4 = 3; i_4 < 11; i_4 += 2) /* same iter space */
        {
            var_21 = ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) var_9)));
            var_22 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) 9878878020173862576ULL)))));
        }
        var_23 |= ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_6 [i_0] [(short)8] [i_0] [(short)12]))));
    }
    for (unsigned short i_5 = 3; i_5 < 10; i_5 += 3) 
    {
        var_24 = ((((/* implicit */_Bool) var_7)) ? (min((max((10465364528546815826ULL), (((/* implicit */unsigned long long int) (signed char)40)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57))) : (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_5])), (var_0))))));
        var_25 ^= ((short) max((((/* implicit */unsigned long long int) (signed char)-57)), (16810851937358487373ULL)));
    }
    for (short i_6 = 1; i_6 < 12; i_6 += 2) 
    {
        arr_20 [i_6] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */signed char) var_4))))))));
        arr_21 [i_6] = ((/* implicit */short) ((signed char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13))), (((/* implicit */unsigned int) min(((unsigned short)32875), (var_3)))))));
    }
    var_26 = ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32869)) << (((3031277769965870647ULL) - (3031277769965870642ULL)))))) ? (((/* implicit */int) (unsigned short)65069)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)32869))))))))));
}
