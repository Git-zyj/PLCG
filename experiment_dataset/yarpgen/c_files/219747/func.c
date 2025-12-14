/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219747
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
    var_16 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) (-(((14292443097410548508ULL) << (((/* implicit */int) ((((/* implicit */_Bool) 4154300976299003084ULL)) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? ((-(4154300976299003116ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44902)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] |= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)239)) > (((/* implicit */int) (unsigned short)0)))) ? (((((/* implicit */int) (unsigned short)65535)) / (((((/* implicit */int) arr_5 [i_1])) % (((/* implicit */int) (short)-2765)))))) : (((((1041121499) ^ (((/* implicit */int) (signed char)-4)))) % (((((/* implicit */int) (short)31)) + (((/* implicit */int) (short)2047))))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (-7263362955229402699LL) : (var_2)))))))))));
        arr_7 [i_1] [i_1] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65515))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23173))) : (8590383222732482142ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 14292443097410548510ULL)) && (((/* implicit */_Bool) 10710821437683836023ULL)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))) ^ (1141204477U))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_10 [i_2] [i_2] [i_1] = ((/* implicit */long long int) var_13);
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (short i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned short) ((unsigned long long int) arr_13 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))))));
                        var_20 = ((/* implicit */int) var_5);
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7991))))))) : ((+(arr_13 [i_1] [i_2] [i_2] [i_1])))));
        }
    }
    var_22 -= ((/* implicit */short) (+(((/* implicit */int) var_5))));
}
