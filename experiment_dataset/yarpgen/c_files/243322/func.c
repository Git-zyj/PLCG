/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243322
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((var_10), (((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (!(((((/* implicit */int) arr_4 [i_2] [(signed char)2] [4] [4])) != (((/* implicit */int) (_Bool)0)))))))));
                        var_18 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((arr_8 [i_0] [(signed char)9] [i_0] [i_0]) <= (((/* implicit */long long int) var_14))))), (arr_2 [i_1] [i_1] [i_1]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2])))));
                        arr_10 [10U] [10U] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), ((+(434143934)))))) <= (min((((/* implicit */unsigned long long int) arr_8 [i_2] [(unsigned char)13] [i_2] [i_2])), (max((((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [(_Bool)1] [3U])), (9932997114694921375ULL)))))));
                        var_19 ^= (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (unsigned short)46530))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((unsigned long long int) var_7)) : (min((arr_13 [i_2] [(signed char)2]), (((/* implicit */unsigned long long int) arr_7 [9U] [i_2])))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [(signed char)12] [8U])) ? (arr_8 [i_0] [3ULL] [(short)10] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4)))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_2]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : ((+(((/* implicit */int) arr_7 [i_0] [i_2]))))));
                            arr_17 [i_2] [1LL] [(unsigned short)6] [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) ((min((arr_12 [7U] [7U] [7U] [0LL]), (((/* implicit */unsigned int) var_0)))) > (((/* implicit */unsigned int) ((arr_1 [(unsigned char)0]) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : (((/* implicit */int) arr_1 [i_0]))))))))));
                        }
                    }
                    arr_18 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((9932997114694921375ULL), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */int) (short)12288)) : ((((~(((/* implicit */int) arr_1 [i_2])))) + ((~(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [13] [i_0] [i_0]))))))));
                    arr_19 [i_1] [i_2] [(short)5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [8])), (arr_11 [(short)7] [i_2] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1]))))))) : (max((((/* implicit */unsigned int) (signed char)-39)), (arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (arr_6 [i_7] [i_1] [i_1] [i_1] [(_Bool)1])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned short)13] [(unsigned short)13] [(signed char)5] [i_6]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [(signed char)13] [(unsigned short)3])) ? (9932997114694921346ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))) : (((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0])) % (-968757284337156083LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_7] [i_7] [12] [i_7] [(unsigned short)1])) != (((/* implicit */int) ((8513746959014630238ULL) != (((/* implicit */unsigned long long int) var_2)))))))))));
                                var_23 += ((/* implicit */int) ((((((var_2) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) <= (arr_21 [i_0]))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) % (arr_22 [i_0] [(short)4] [i_0] [i_0] [i_0])))) != (arr_12 [i_0] [i_0] [i_0] [i_0])))))));
                                arr_25 [i_6] [(short)1] [i_6] [(signed char)5] [(signed char)5] [i_2] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_12 [i_2] [4ULL] [i_2] [(unsigned short)9])) ? (var_2) : (((/* implicit */long long int) arr_21 [i_2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) var_3))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [8] [(unsigned char)12] [8]), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */int) arr_7 [(short)6] [i_2])) : (((/* implicit */int) ((unsigned short) var_10))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
