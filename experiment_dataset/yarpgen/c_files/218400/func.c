/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218400
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3740531903U)) & (12106676933162517584ULL)))) ? (834282037) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */int) arr_0 [i_0 - 1]))))))) ^ (max((((/* implicit */unsigned int) 834282037)), (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1])))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_12 |= ((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned short)12925)) == (-1207935971)))));
            var_13 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) ((unsigned char) arr_0 [i_0]))))));
        }
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)14957), (((/* implicit */short) (!(((/* implicit */_Bool) 4U))))))))) : (var_9)));
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */long long int) 0)) : (((long long int) var_9))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) var_10))))))));
        arr_12 [12LL] [12LL] &= arr_2 [i_0 + 1];
    }
    for (int i_3 = 4; i_3 < 22; i_3 += 3) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_14 [i_3])))) ? (((arr_14 [i_3 - 1]) / (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) (unsigned short)25142)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) var_7))));
        var_16 ^= ((/* implicit */short) (((-(((var_11) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_14 [i_3 - 3])) ? (arr_13 [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_1))))))));
        arr_16 [i_3] = ((/* implicit */long long int) var_3);
    }
    var_17 -= ((/* implicit */int) var_5);
    var_18 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_19 |= ((/* implicit */unsigned int) ((short) 12106676933162517584ULL));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_10))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                var_21 = ((/* implicit */signed char) ((int) 3612673492U));
                arr_31 [i_4] [i_4] [i_4] = ((/* implicit */int) ((unsigned int) arr_26 [i_7] [i_7] [i_7]));
            }
            var_22 -= ((/* implicit */long long int) arr_25 [i_4] [i_4]);
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                arr_35 [i_8] [i_6] [i_4] = ((/* implicit */signed char) arr_30 [i_8] [i_6] [i_4]);
                /* LoopSeq 1 */
                for (long long int i_9 = 4; i_9 < 15; i_9 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_8] [i_8])) && (((/* implicit */_Bool) (-(-834282038)))))))));
                    var_24 = ((/* implicit */_Bool) ((short) (~(((((/* implicit */int) var_0)) << (((((/* implicit */int) (unsigned short)25142)) - (25117))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_41 [i_4] [i_4] [i_10] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)1704)))) : ((-(((/* implicit */int) var_7))))));
                    arr_42 [i_4] [i_4] [i_8] |= ((/* implicit */short) arr_20 [i_10]);
                    arr_43 [i_4] [i_10] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) != ((-(((/* implicit */int) arr_2 [i_6]))))));
                    arr_44 [i_4] [i_10] [i_4] [i_10] [i_10] = ((/* implicit */_Bool) (-(-5317889542877820307LL)));
                }
            }
        }
        for (int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            arr_47 [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((int) arr_19 [i_11]))))));
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 3; i_13 < 12; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 590384567)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned char)129))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_13 + 1])))) : ((+(arr_30 [i_13 + 1] [i_13] [i_13 - 3])))));
                            var_27 = (~(811475227));
                        }
                    } 
                } 
            } 
        }
        arr_55 [i_4] = ((/* implicit */unsigned short) arr_38 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
    }
}
