/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200737
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? (((unsigned long long int) 15981755542629356912ULL)) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0] [i_1 + 2])) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_0] [i_0])) + (117))) - (27))))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3] [i_3])) ^ (((/* implicit */int) arr_9 [i_3] [i_3])))))));
                                var_21 = ((/* implicit */_Bool) var_9);
                                arr_12 [i_0] [i_3] [i_1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) min((((min((((/* implicit */int) var_7)), (487345790))) & (((((/* implicit */int) arr_0 [i_2] [(short)0])) | (-1))))), (((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_3] [i_3] [i_2] [i_2] [i_2])) > (min((-11LL), (((/* implicit */long long int) var_18)))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_2] [i_2])) > (((/* implicit */int) arr_9 [i_0] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 6300392800709489934ULL)))) : (arr_11 [i_2] [i_1 + 1] [i_2] [i_1 + 2] [i_1])));
                    var_23 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_2)) % (var_13)))))) / (((((arr_2 [i_0]) == (((/* implicit */int) (_Bool)1)))) ? (arr_10 [(unsigned short)9] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) * (arr_11 [i_2] [i_1 - 3] [i_1 - 3] [i_1 + 2] [i_2]))))))));
                    var_24 = ((/* implicit */long long int) ((((arr_2 [i_1 - 2]) / (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_11))))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned short)60052))) && ((!(var_4))))))));
                }
                for (int i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    var_25 = ((signed char) (short)1);
                    var_26 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                    var_27 = ((/* implicit */unsigned long long int) ((unsigned short) var_12));
                }
                for (int i_6 = 1; i_6 < 10; i_6 += 4) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) min((var_13), (arr_2 [i_0])))) ? (arr_16 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [(short)4] [(short)4]))))));
                    arr_18 [i_0] [i_1] [i_1] [i_0] = arr_0 [i_0] [i_1 - 3];
                    arr_19 [i_1 + 2] [i_1 + 2] [i_1 + 2] = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0] [i_0]))));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0]))) > (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [i_0] [i_0])), ((unsigned short)54384)))) ? (arr_8 [i_6 + 3] [i_6 - 1] [i_6] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)60052), (((/* implicit */unsigned short) arr_6 [i_0] [i_1]))))))))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) > (((((/* implicit */_Bool) arr_11 [(signed char)12] [(signed char)12] [i_1] [i_6 - 1] [i_6])) ? (arr_11 [8LL] [8LL] [i_1 - 2] [i_6 + 3] [8LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 1] [4])))))));
                }
                for (int i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((2226712839552176843ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) min((arr_9 [i_0] [12]), (((/* implicit */unsigned short) var_9))))) ^ (min((((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_0])), (var_13)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))))) ? ((~(4294950912LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_17)))) | (((/* implicit */int) arr_0 [i_7 - 1] [i_7 + 2]))))) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [i_0]))));
                        var_29 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_18)) ? (arr_22 [i_1 - 3] [i_1 - 3] [i_7 + 3]) : (((/* implicit */int) var_5)))));
                        var_30 = (~(((/* implicit */int) (((!(arr_6 [i_1] [i_1]))) || (arr_6 [i_7 + 2] [i_1 - 1])))));
                        arr_28 [i_0] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_7 - 1] [i_0]);
                        arr_29 [i_0] [i_0] [i_7] = ((/* implicit */int) (!(((((/* implicit */_Bool) ((unsigned int) arr_9 [4LL] [4LL]))) || ((_Bool)1)))));
                    }
                    arr_30 [i_0] [i_0] [i_0] [i_0] = min(((+(((/* implicit */int) arr_6 [i_0] [i_1 - 1])))), (((min((((/* implicit */int) (unsigned short)5480)), (-959689247))) | (((((/* implicit */int) var_3)) | (((/* implicit */int) var_2)))))));
                }
                var_31 = ((/* implicit */_Bool) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) | (((((/* implicit */int) arr_1 [i_0] [(signed char)4])) | (((/* implicit */int) ((signed char) (unsigned short)12207)))))));
                arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_8 [i_1] [i_1] [i_1 + 1] [i_1 + 1])))) ? (((((((/* implicit */_Bool) arr_5 [7])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5)))) + (((((/* implicit */_Bool) (short)19918)) ? (((/* implicit */int) (short)-18981)) : (((/* implicit */int) (short)-12832)))))) : (((/* implicit */int) (!(var_1))))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_5))))), (var_5))))));
}
