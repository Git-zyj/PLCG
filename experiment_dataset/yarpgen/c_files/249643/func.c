/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249643
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
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (var_6) : (((((/* implicit */_Bool) -3799580918154072446LL)) ? (var_3) : (((/* implicit */long long int) var_7)))))) / (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60414))) <= (var_11))), ((!(((/* implicit */_Bool) 2337967408U))))))))));
    var_17 &= ((/* implicit */unsigned char) var_9);
    var_18 += ((/* implicit */signed char) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)60414))))) ? (arr_1 [(short)12] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    var_21 = (-(((/* implicit */int) arr_3 [i_0] [i_1])));
                    arr_7 [i_0] [10LL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(arr_5 [i_0] [i_0] [i_1] [i_2]))))));
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [(_Bool)1] [(short)19] [i_2]))))) : (arr_1 [i_0] [i_1]));
                }
                for (short i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 3; i_5 < 22; i_5 += 1) 
                        {
                            arr_16 [(_Bool)1] [i_4] [i_4] [i_3] [i_3] [0ULL] [i_0] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (arr_1 [(signed char)8] [i_1])))), ((~(17559146232104361971ULL)))))));
                            arr_17 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */short) max((((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (+(arr_12 [i_5 - 2] [i_5] [i_4] [i_0] [i_1] [i_0]))))));
                            arr_18 [i_1] [i_4] [i_3] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) arr_8 [i_0])), (arr_9 [i_0] [i_1] [i_3] [(signed char)3])));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (arr_3 [i_1] [i_1]))))))) || (((/* implicit */_Bool) ((unsigned char) arr_12 [i_5 - 1] [i_5] [i_3] [i_5 + 1] [i_4] [i_3])))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((long long int) arr_10 [i_0] [i_1] [8LL] [i_0] [i_5])))));
                        }
                        arr_19 [8ULL] [8ULL] = ((/* implicit */short) (_Bool)1);
                    }
                    var_26 = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-4))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_11 [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))))) : (((/* implicit */long long int) min((min((arr_5 [22ULL] [(_Bool)1] [i_1] [i_0]), (((/* implicit */int) arr_15 [i_3] [i_1] [i_1] [(short)11] [i_0])))), (((/* implicit */int) ((unsigned char) arr_8 [i_0])))))));
                    var_27 = ((/* implicit */unsigned char) (unsigned short)6135);
                }
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    arr_22 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5118))))) > (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0])));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_1 [(_Bool)1] [(_Bool)1]))));
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_29 = ((/* implicit */signed char) arr_11 [i_0] [19ULL] [i_7] [i_7]);
                    arr_25 [i_0] [i_1] = ((/* implicit */signed char) (-((+(arr_5 [i_0] [i_1] [(short)15] [i_1])))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [17LL])) ? (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                }
                arr_26 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-4))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_8)) ? ((~(5437758728376547260ULL))) : (var_11))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (-305261706) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))))))));
}
