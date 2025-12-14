/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194906
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
    var_17 = ((/* implicit */_Bool) var_4);
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) min((-1344430661462829291LL), (((/* implicit */long long int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */short) var_0)))))) : (min((var_15), (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((signed char) arr_0 [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_20 &= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_7)))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */short) ((((((37218756) > (37218760))) ? (arr_3 [i_3 + 1] [i_1] [(unsigned char)8]) : (((/* implicit */long long int) ((unsigned int) arr_11 [i_0] [i_0] [i_0] [i_3 + 1] [i_4]))))) > (arr_3 [i_4] [7U] [i_4])));
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_4 - 1] [i_3 + 1])) & (((/* implicit */int) arr_5 [i_3] [i_3] [i_3 + 1] [i_3]))))) ? (((((/* implicit */int) arr_6 [i_3] [i_1] [i_4 - 1] [i_3])) | (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_4 - 1] [i_3 + 1])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4 - 1] [i_3])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_4 - 1] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_1] [(signed char)5] [i_3 + 1] [i_4])))));
                            arr_13 [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min(((-2147483647 - 1)), (-37218757))) % (((((/* implicit */_Bool) 6501649933461578729LL)) ? (((/* implicit */int) var_13)) : (37218784)))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (max((-3927158888260346816LL), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_11 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_4 - 1]))))));
                        }
                        var_23 = var_7;
                        arr_14 [i_3 + 1] [i_1] |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3 + 1])) && (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3 + 1] [i_0])) ? (arr_4 [i_3 + 1] [i_3 + 1]) : (2147483647))))));
                        var_24 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) ? (((((((/* implicit */int) (signed char)-108)) + (2147483647))) >> (((-5054023470271908105LL) + (5054023470271908131LL))))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1])) > (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1])))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned char) var_13);
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                arr_19 [i_5] [i_0] [i_0] = ((/* implicit */long long int) (+(1164773529)));
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 37218756)) && (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [3] [i_0] [i_1]))))), (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (var_2)))) : (((((/* implicit */_Bool) (unsigned char)224)) ? (arr_7 [i_0] [i_1] [i_5] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))))));
            }
            for (int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8307)) ? (2147483647) : (((/* implicit */int) (short)23505))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)3)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_0] [i_6])), (arr_0 [i_0] [i_0])))) ? (17776627795330160259ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_1] [i_1] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1])) || (arr_5 [i_0] [i_1] [i_1] [i_6])))))));
            }
        }
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
        {
            arr_27 [i_7] [i_7] [i_0] |= ((/* implicit */int) ((unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (_Bool)0)))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4705185781000093468LL)) ? (((/* implicit */int) (short)512)) : ((-2147483647 - 1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_7] [i_7] [i_0] [i_0]))) >= (arr_2 [i_0] [i_0])))) : (((int) 1164773527))));
        }
        for (short i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            var_30 = ((/* implicit */signed char) (~(11LL)));
            var_31 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) < (((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_24 [i_0] [i_0] [i_0])))))));
            var_32 ^= ((/* implicit */short) var_4);
        }
    }
}
