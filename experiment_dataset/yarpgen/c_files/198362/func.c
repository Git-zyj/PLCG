/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198362
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) (-((+(arr_0 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_13 [i_1] [i_1] [(signed char)1] [i_3] = ((/* implicit */unsigned int) arr_2 [i_0]);
                            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [11ULL] [i_2] [i_1] [i_0]))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [17LL] [i_0])) & (((/* implicit */int) (signed char)-13))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((356377245U) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)110)), ((unsigned short)15934)))))))) ? (((((/* implicit */_Bool) (signed char)15)) ? (3938590040U) : (3513155091U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_21 [i_5] [i_1] = ((/* implicit */_Bool) arr_1 [i_0]);
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)21)) & (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))) > (1019368984U)))) < (((/* implicit */int) (unsigned short)35578)))))));
                                var_22 = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)218))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_23 = arr_5 [i_1] [(signed char)16] [i_1] [i_1];
                            var_24 = ((/* implicit */short) var_9);
                            arr_28 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)-1))))));
                            var_25 = ((/* implicit */unsigned char) min(((~(arr_19 [i_7 - 1] [(signed char)18] [i_7 + 2]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (1634238208145595182ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_9 = 1; i_9 < 11; i_9 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_9])) ? (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (unsigned short)29945)) : (((/* implicit */int) (signed char)3)))) : (((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_9 + 3])) ? ((~(((/* implicit */int) arr_20 [i_9 - 1] [i_9 + 3] [(unsigned char)14] [8ULL] [i_9] [6U] [i_9 + 2])))) : ((~(((/* implicit */int) (signed char)-119))))))));
        arr_32 [i_9] [i_9 + 2] = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 2] [15U]))) : (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)49615)))))))));
    }
    for (unsigned short i_10 = 1; i_10 < 11; i_10 += 2) /* same iter space */
    {
        arr_35 [(unsigned short)10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [18ULL] [0ULL] [0ULL] [i_10] [i_10 + 1] [i_10])) < (var_10)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_10] [i_10 + 3])) : (((/* implicit */int) (signed char)-127)))))))));
        var_27 = ((/* implicit */signed char) 1487048629U);
    }
    for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) (signed char)86);
        var_29 = ((/* implicit */signed char) arr_12 [10U] [i_11] [10U] [11LL]);
        var_30 = ((/* implicit */unsigned short) ((arr_9 [i_11 - 1] [i_11 + 1] [i_11] [i_11 + 1]) <= (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_11] [i_11] [i_11] [i_11]))) > (arr_5 [(signed char)16] [(signed char)16] [i_11] [(signed char)16]))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [4ULL] [i_11 + 1] [4ULL]))) < (var_8)))) : ((+(((/* implicit */int) (signed char)-121)))))))));
    }
    var_31 = ((/* implicit */unsigned char) ((var_12) >> (((((/* implicit */int) (unsigned short)35592)) - (35561)))));
    var_32 = (short)6851;
}
