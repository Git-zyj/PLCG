/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215711
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_10 += ((/* implicit */_Bool) ((((/* implicit */int) min((((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) == (1U)))))) ^ (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_2 [i_0]))))), (arr_0 [i_0] [i_0])))), (6563350138869323880LL)));
    }
    var_11 = ((/* implicit */signed char) var_6);
    var_12 += ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_4)))));
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_13 -= ((/* implicit */signed char) (-(-6563350138869323881LL)));
                arr_12 [i_2] = ((/* implicit */int) var_2);
                var_14 = ((/* implicit */short) arr_8 [i_3] [i_2]);
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) < (((/* implicit */int) (_Bool)0))));
            }
            var_16 = ((/* implicit */unsigned short) ((short) ((int) arr_8 [i_1] [(short)0])));
        }
        /* LoopNest 3 */
        for (long long int i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (signed char i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((unsigned long long int) arr_5 [i_6 - 1])) % (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_4)))))))))));
                        var_18 ^= min((((/* implicit */long long int) ((int) var_3))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (6563350138869323880LL))));
                        var_19 = ((/* implicit */short) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) -6563350138869323881LL))));
                        var_20 = ((/* implicit */unsigned char) ((max((arr_15 [i_4] [i_4 - 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_1] [i_1]))))))) <= (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_21 [i_1] [i_1] [i_1] [i_1]))) | (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_0)))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 4) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_7)), (1108110428))) << ((((((+(arr_22 [i_7 - 2]))) + (923600281))) - (13)))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned short) var_8);
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */short) var_8);
                        var_23 = ((/* implicit */unsigned short) ((arr_29 [i_7] [i_7] [(short)8]) ? (((((/* implicit */int) ((arr_22 [i_8]) <= (arr_28 [19LL] [9])))) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_27 [i_8] [(_Bool)1]) : (((/* implicit */int) var_0))))) >= (min((0ULL), (((/* implicit */unsigned long long int) arr_31 [i_10])))))))));
                    }
                }
            } 
        } 
        var_24 ^= ((/* implicit */unsigned short) (~(((((/* implicit */int) min((var_0), (var_2)))) * (((/* implicit */int) ((-6563350138869323881LL) == (((/* implicit */long long int) -1525127091)))))))));
        var_25 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_7 - 1]))))) + (min((((/* implicit */int) (unsigned char)56)), (((((/* implicit */_Bool) var_6)) ? (arr_27 [i_7] [i_7]) : (((/* implicit */int) var_5))))))));
        var_26 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) 2789091939U)) ? (arr_31 [i_7 - 1]) : (arr_31 [i_7]))) == (((arr_31 [i_7 - 1]) >> (0ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        arr_35 [i_11] = ((/* implicit */short) ((unsigned int) arr_1 [i_11]));
        var_27 = ((/* implicit */unsigned long long int) ((short) ((unsigned short) arr_11 [i_11] [i_11] [i_11] [i_11])));
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned long long int) arr_33 [i_11])))));
        arr_36 [i_11] = ((/* implicit */unsigned char) var_1);
    }
}
