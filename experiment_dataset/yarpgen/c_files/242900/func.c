/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242900
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))) ^ (((/* implicit */int) (unsigned short)65532)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3]);
                        var_22 = ((/* implicit */long long int) (+(var_0)));
                        var_23 ^= ((/* implicit */_Bool) ((short) min((((/* implicit */long long int) (unsigned short)5)), (var_17))));
                        arr_8 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_7 [i_3] [i_3]))) && (((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_4 = 4; i_4 < 9; i_4 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) ((max((4294967289U), (((/* implicit */unsigned int) var_2)))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 392552692)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (short)20989)))))))))));
            arr_11 [(short)6] [i_4 - 1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_4 - 2] [i_4 - 4] [i_4 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_4 - 3] [i_4 - 4] [i_4])))), (((/* implicit */int) min((arr_4 [i_4 + 1] [i_4 - 4] [i_4]), (arr_4 [i_4 - 3] [i_4 - 4] [i_4]))))));
        }
        for (signed char i_5 = 4; i_5 < 9; i_5 += 1) /* same iter space */
        {
            var_25 ^= ((/* implicit */unsigned long long int) ((((arr_7 [i_0] [i_5 + 1]) ? (arr_6 [i_5 - 3] [i_5 - 1]) : (arr_6 [i_5 - 1] [i_5 - 2]))) > (((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_5 - 1])) ? (arr_6 [i_5 - 1] [i_5 + 1]) : (arr_6 [i_5 - 1] [i_5 - 3])))));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)5)) ? (((min((((/* implicit */unsigned int) (unsigned short)65535)), (var_10))) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((((((/* implicit */_Bool) (short)-25565)) ? (((/* implicit */unsigned int) var_2)) : (4294967278U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
        }
        for (signed char i_6 = 4; i_6 < 9; i_6 += 1) /* same iter space */
        {
            arr_20 [i_6] [i_0] [i_0] |= ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_6] [i_0])) ? (var_17) : (((/* implicit */long long int) var_2)))) != (((/* implicit */long long int) ((/* implicit */int) (short)20989))))))));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)5)))))))));
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) min((((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)65529)) << (((((/* implicit */int) (short)3203)) - (3194)))))))), (min((max((((/* implicit */unsigned int) arr_24 [(signed char)6] [i_6])), (5U))), (((/* implicit */unsigned int) arr_21 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6])))))))));
            }
            /* LoopNest 3 */
            for (unsigned char i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_34 [i_0] [i_9] [i_9] [i_9] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_9] [i_8] [i_6])) ? (((/* implicit */int) max(((short)-3136), (((/* implicit */short) (signed char)-100))))) : (((((/* implicit */_Bool) (unsigned short)65521)) ? (arr_32 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_32 [i_6 - 3] [i_9] [i_10])))));
                            var_29 = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_16))))) <= (arr_28 [i_0] [i_6] [i_8 + 2] [i_9] [8]))));
                            arr_35 [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) min(((unsigned short)15), (((/* implicit */unsigned short) (signed char)0))))))) & (((((/* implicit */long long int) arr_18 [i_6 - 2])) | (var_17)))));
                        }
                    } 
                } 
            } 
            var_30 = max((((/* implicit */int) min((arr_26 [i_6] [i_6 + 1] [(_Bool)1]), (arr_27 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1])))), (((((/* implicit */int) arr_25 [i_6 - 4] [i_6 - 2] [i_6])) << (((((/* implicit */int) max((arr_21 [i_0] [i_0] [i_6 + 1] [i_0]), (((/* implicit */short) arr_14 [i_0]))))) - (30886))))));
        }
    }
}
