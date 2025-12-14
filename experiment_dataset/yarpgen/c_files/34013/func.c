/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34013
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
    var_12 = ((/* implicit */short) min((var_3), (((/* implicit */long long int) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((1623455900196398926LL) - (1623455900196398926LL))) >> (((/* implicit */int) arr_2 [i_0] [i_1] [4ULL]))));
                arr_5 [(unsigned char)2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_1 [i_1] [i_0])), ((unsigned char)133)));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((min((arr_3 [i_0] [i_0]), (((_Bool) 9LL)))) ? (((((((/* implicit */_Bool) -1623455900196398926LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))) % (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (-1787649142) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((-1623455900196398927LL), (-1623455900196398926LL)))) && (((/* implicit */_Bool) 8208665140382725151ULL)))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) != (10238078933326826464ULL)))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (~(((((arr_8 [i_0] [i_1] [i_1] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_2]))) & (var_8))) - (5653767764331987988ULL)))))));
                    arr_12 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) max(((~(min((((/* implicit */unsigned long long int) var_9)), (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((1623455900196398925LL) ^ (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) (~(1623455900196398925LL)));
                    arr_17 [i_1] [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3])) || (((/* implicit */_Bool) var_11)))))) & (arr_9 [i_0] [i_1] [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) * (((/* implicit */int) arr_3 [i_1] [i_1])))))));
                }
                for (long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [1] [i_4])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_9 [i_4] [i_1] [i_4])))) ? (arr_9 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >> ((((~(((/* implicit */int) ((((/* implicit */int) arr_14 [17] [17] [14])) != (((/* implicit */int) (signed char)83))))))) + (61)))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_24 [1] [i_1] [i_4 + 1] [i_4] = ((/* implicit */int) (((+(var_1))) / (((/* implicit */unsigned long long int) (((+(arr_8 [i_0] [i_1] [i_4] [i_4]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_1] [(short)9] [i_4])) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) var_9))))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 2) 
                        {
                            arr_29 [i_0] [i_1] [i_4] [i_6] [i_6] &= (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61662))))));
                            arr_30 [(short)1] [1ULL] [i_1] [(signed char)4] [1ULL] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((7ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24134)))))), (min((8208665140382725151ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_0] [i_0]))))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_8 [i_6 - 2] [i_0] [i_0] [i_0]) % (var_0)))), (((((/* implicit */_Bool) -1623455900196398927LL)) ? (1623455900196398925LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4195))))))))));
                            arr_31 [i_0] [12LL] [i_4] [i_4] [12LL] = ((/* implicit */signed char) ((((-1623455900196398916LL) | (-1623455900196398916LL))) / (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)11369))))));
                            arr_32 [i_0] [i_0] [i_1] [i_0] [i_5] [i_6] &= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) max((-1623455900196398899LL), (((/* implicit */long long int) var_2))))), (((8488136838012785762ULL) / (((/* implicit */unsigned long long int) var_0)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_5] [i_5] = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (17996806323437568ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                            arr_36 [i_4] [i_0] [i_4 + 3] [i_4] [i_4] &= ((/* implicit */unsigned char) arr_34 [i_0] [i_4 + 1] [i_4 - 1] [i_4 + 3] [i_4] [i_4 + 3] [i_4]);
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_40 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50280)) ? (((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_0] [i_4] [i_4] [i_5] [i_8])) : (10921176238645830959ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_5] [i_1]) || (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) arr_9 [i_5] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_28 [i_1] [i_8])) : (arr_27 [i_4] [i_4] [i_1] [i_1] [i_4] [i_5] [i_8])))));
                            arr_41 [i_0] [i_0] [i_5] [i_5] [i_4] = ((/* implicit */int) (_Bool)1);
                        }
                        arr_42 [i_0] [i_0] [i_0] [i_0] [(signed char)12] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_4] [i_5])), (var_1)));
                    }
                    arr_43 [i_0] [i_4 + 2] [i_4] [14LL] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) (unsigned short)41402))))) ? (((3972480283U) << (((((/* implicit */int) (signed char)118)) - (106))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) arr_34 [i_0] [i_0] [i_0] [i_0] [(short)8] [i_0] [i_0])), (-1623455900196398915LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31628))) < (4655407664124901018LL)))))))));
                }
            }
        } 
    } 
}
