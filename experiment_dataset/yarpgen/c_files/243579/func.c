/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243579
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] [(_Bool)1] &= ((/* implicit */unsigned char) (~(arr_3 [i_0] [i_0] [i_2])));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                        {
                            arr_14 [13LL] [13LL] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_14)) | (arr_2 [i_0] [i_1])));
                            var_15 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)58469)) >= (((/* implicit */int) (unsigned short)7053)))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1 + 3] [i_2] [i_5])) != (((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_5 + 1] [(_Bool)1])))))));
                            var_16 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned int) var_6)), (var_13))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_9))))) - (max((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)7062)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_5 [i_5 + 1] [i_1])) - (1883))))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58455)))))), (arr_16 [i_0] [i_1]))), ((((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_6 [i_0] [i_1 - 1] [i_2]))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7073)) << (((((/* implicit */int) var_3)) - (193))))))))));
                            var_18 = ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2] [i_3] [(unsigned char)8])) ? (((/* implicit */unsigned long long int) max((arr_0 [i_6]), (arr_0 [i_2])))) : ((~(arr_21 [i_2] [i_2] [i_3 + 1] [i_6 + 1]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                        {
                            var_19 += min((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_7])) ? (var_7) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))), (((/* implicit */unsigned long long int) max(((~(var_14))), (((/* implicit */unsigned int) arr_5 [i_1 + 3] [i_1 + 1]))))));
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52446)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (unsigned short)58486))));
                            arr_27 [i_0] [i_0] [i_2] [i_3 + 3] [i_2] = ((/* implicit */unsigned char) (-(arr_6 [i_2] [i_3] [(_Bool)1])));
                            arr_28 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)7062)));
                        }
                    }
                } 
            } 
        } 
        arr_29 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0])), ((-(var_14)))))) || (((/* implicit */_Bool) min((90919666947022240LL), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 3; i_8 < 12; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) var_4);
                    var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? ((-(var_10))) : (((/* implicit */unsigned long long int) var_14)))) - ((+(((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58484)))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((max((arr_35 [i_10]), (((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))))) < (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_10]))))))))));
        var_24 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10] [i_10])))))), (((((/* implicit */unsigned long long int) arr_35 [i_10])) - (var_7))))), (((/* implicit */unsigned long long int) var_4))));
    }
    var_25 = var_0;
}
