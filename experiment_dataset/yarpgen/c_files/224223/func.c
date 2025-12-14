/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224223
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
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)219))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)34)) - (11)))))))) ? (((((((/* implicit */int) (unsigned char)46)) / (((/* implicit */int) (unsigned char)14)))) >> ((((~(((/* implicit */int) var_0)))) + (75))))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)119))))), ((unsigned char)40))))));
                var_19 += ((/* implicit */unsigned int) (~(max((((((/* implicit */int) (unsigned char)6)) | (((/* implicit */int) arr_1 [(unsigned short)4] [i_1])))), (((/* implicit */int) ((signed char) (unsigned char)119)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [10U] [i_1] [(_Bool)0]))))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) var_0)))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) 2063249390038190973ULL);
                }
                for (signed char i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    var_22 &= ((/* implicit */_Bool) (unsigned short)62004);
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((min((min((arr_9 [i_1] [4ULL] [i_3]), (((/* implicit */unsigned int) arr_4 [(unsigned char)6] [i_1] [i_1])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) << (((((/* implicit */int) var_6)) - (242)))))))), (((/* implicit */unsigned int) max((min((var_8), (arr_2 [i_0]))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [(signed char)0])) <= (((/* implicit */int) (_Bool)1)))))))))))));
                    arr_14 [i_0] = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) (short)32755)))) ? (((((/* implicit */int) arr_2 [i_3])) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) arr_3 [6ULL]))));
                }
                for (signed char i_4 = 1; i_4 < 10; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 3; i_5 < 11; i_5 += 4) 
                    {
                        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12582912U)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned short)65535))));
                        arr_19 [(unsigned short)4] [i_1] [(unsigned short)9] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (-(max((((/* implicit */unsigned int) (unsigned char)8)), (arr_9 [(_Bool)1] [i_0] [i_1]))))));
                        var_25 += ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned char) max(((signed char)124), (((/* implicit */signed char) arr_8 [2U]))))), (max(((unsigned char)146), ((unsigned char)40))))))));
                        var_26 += ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [(unsigned short)6] [(unsigned char)10])) ? (((/* implicit */int) (!(arr_8 [2U])))) : (((((/* implicit */int) arr_17 [i_0])) / (((/* implicit */int) arr_4 [(unsigned char)0] [i_1] [i_5])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [(unsigned char)4] [i_4])), (arr_16 [i_0] [i_1] [i_0])))))))));
                        arr_20 [i_0] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (unsigned char)14)), (arr_7 [i_1] [i_4] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-79)), (var_6))))))) ? (min((arr_9 [i_5] [i_0] [i_5]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) (unsigned short)14076)) : (((/* implicit */int) (short)32745))))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))))));
                    }
                    var_27 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_18 [(unsigned char)9] [i_0])) < ((((!(((/* implicit */_Bool) 4282384370U)))) ? (((/* implicit */int) max((var_12), (((/* implicit */unsigned char) arr_17 [i_0]))))) : ((-(((/* implicit */int) arr_17 [i_1]))))))));
                }
            }
        } 
    } 
    var_28 |= ((/* implicit */signed char) ((((/* implicit */int) var_7)) & (max((((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (short)32745))))));
}
