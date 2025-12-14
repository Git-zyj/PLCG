/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221824
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) max((max((var_2), (var_0))), (max((var_2), (((/* implicit */long long int) var_8))))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((short) var_8))), (min((((/* implicit */long long int) var_5)), (arr_1 [i_0]))))), (((long long int) arr_2 [i_0]))));
        var_14 = (-(min((min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) arr_0 [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (signed char)120))))), (-7724300202547137433LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_1]))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) ((unsigned char) var_10)))));
        var_16 = ((/* implicit */int) min((max((var_7), (((/* implicit */long long int) arr_4 [i_1] [i_1])))), (((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) var_2)))))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_17 -= ((/* implicit */long long int) (signed char)40);
        var_18 = ((/* implicit */unsigned int) (signed char)-41);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_19 = (!(((/* implicit */_Bool) arr_7 [i_3])));
            arr_12 [i_2] [i_2] = ((/* implicit */short) (!(arr_4 [(short)18] [i_2])));
            var_20 = arr_4 [i_2] [i_2];
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 3; i_5 < 22; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 4; i_6 < 24; i_6 += 1) 
                {
                    arr_20 [i_4] [i_6] = ((/* implicit */short) var_10);
                    arr_21 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) != (((((/* implicit */_Bool) (signed char)40)) ? (arr_11 [i_5]) : (((/* implicit */long long int) arr_13 [i_2] [i_5] [i_4]))))))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))))) - (4294963317U)))));
                }
                for (long long int i_7 = 4; i_7 < 22; i_7 += 2) 
                {
                    arr_25 [i_2] [i_4] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_1), (var_1)))) && ((!(arr_16 [i_4] [14U] [i_7]))))) || (((/* implicit */_Bool) arr_15 [i_5 + 2] [i_7 - 3] [i_7]))));
                    var_21 = ((/* implicit */int) arr_7 [i_2]);
                }
                var_22 -= (~(((((/* implicit */_Bool) arr_19 [i_5 + 3] [i_4] [i_5 - 2] [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0)))));
            }
            var_23 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_16 [i_2] [i_4] [i_2])), (max((arr_13 [i_4] [i_2] [i_4]), (((/* implicit */unsigned int) arr_19 [i_2] [i_4] [i_2] [i_4]))))))) ? (((var_7) + (var_7))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (var_4))));
            var_24 = ((/* implicit */long long int) (_Bool)1);
            arr_26 [i_2] [i_4] [i_4] = max((((/* implicit */long long int) var_11)), ((-(((((/* implicit */_Bool) arr_24 [i_4])) ? (905822611429439402LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)40))))))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) (signed char)-77)), (max((min((var_3), (((/* implicit */unsigned short) (signed char)40)))), (((/* implicit */unsigned short) (_Bool)0)))))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (short i_9 = 2; i_9 < 24; i_9 += 1) 
            {
                for (unsigned short i_10 = 2; i_10 < 23; i_10 += 1) 
                {
                    {
                        arr_36 [i_9] [i_8] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_34 [i_9] [i_10 - 2] [i_9])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_34 [i_9] [i_10 - 2] [i_9 - 1])))) >= (((int) max((((/* implicit */signed char) arr_32 [i_2] [i_8] [i_9 + 1])), (var_6))))));
                        /* LoopSeq 1 */
                        for (short i_11 = 2; i_11 < 23; i_11 += 2) 
                        {
                            arr_39 [i_9] [i_8] [i_8] = ((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_9]);
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((int) min((((/* implicit */long long int) (signed char)40)), (((((/* implicit */_Bool) arr_35 [i_8] [i_2])) ? (arr_7 [i_2]) : (1184039896506915701LL)))))))));
                        }
                    }
                } 
            } 
        } 
    }
}
