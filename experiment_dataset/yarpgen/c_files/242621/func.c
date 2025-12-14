/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242621
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -792367857680935948LL)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15337))))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))))) : (min((var_10), (arr_5 [i_0] [i_2] [i_2] [i_1])))));
                        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_6 [i_0])), ((unsigned char)132)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_2] [i_0]))) : (min((arr_5 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */long long int) (unsigned short)50214))))))) & (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (signed char)4)) ? (14134304231032058129ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15337)))))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min(((signed char)-24), (((/* implicit */signed char) (_Bool)1)))))));
                        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)68)))), (((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */int) (short)-8724)) : (((/* implicit */int) var_8))))))) ? ((+((-2147483647 - 1)))) : (-1587898278)));
                        arr_8 [i_0] [i_3] [i_2] [i_3] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)560)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))) : (-1962470182739745496LL))))));
                    }
                    arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_1] [i_2])), (2239356414U)))) != (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2])) ? (14134304231032058115ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */short) arr_6 [i_0])), (arr_4 [i_0] [i_1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((4312439842677493486ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_14))));
                    arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (var_10)))) ? (max((((/* implicit */unsigned int) var_17)), (4294950912U))) : (((/* implicit */unsigned int) ((((4312439842677493487ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)51743)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) ((5631726315735109214LL) - (((/* implicit */long long int) min((((/* implicit */int) var_6)), ((-(((/* implicit */int) (signed char)127)))))))));
    var_27 = ((/* implicit */unsigned short) var_7);
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1121055750683715626ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-16066), (((/* implicit */short) var_7)))))) : (min((1121055750683715626ULL), (((/* implicit */unsigned long long int) (short)32759))))))) ? (max((-2289482560944980941LL), (((/* implicit */long long int) max((var_15), (((/* implicit */unsigned short) (unsigned char)188))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? ((-(((/* implicit */int) (short)554)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15445646978312526116ULL))))))))));
}
