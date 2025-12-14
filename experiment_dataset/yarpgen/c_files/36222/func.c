/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36222
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [(short)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(signed char)17] [i_0])) * (((((/* implicit */int) var_18)) * (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) 2670395469U)) : (((arr_1 [i_0] [i_0]) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))))))) : (((/* implicit */unsigned long long int) 2670395469U))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0 - 2] [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) min((arr_4 [i_1] [15U] [i_1]), (min((4850228403988974562ULL), (((/* implicit */unsigned long long int) (unsigned short)56876))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) 2670395465U);
                            var_21 = ((/* implicit */unsigned char) ((int) ((1624571827U) >> (((((/* implicit */int) arr_9 [i_0])) - (13104))))));
                            var_22 = ((/* implicit */unsigned short) ((unsigned char) arr_4 [13LL] [i_3] [i_4]));
                        }
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (arr_8 [i_0 + 1] [i_0 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) (short)-9)))) : (max((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0 - 2])) && (((/* implicit */_Bool) arr_14 [i_0] [(unsigned char)18] [i_5] [(unsigned char)18] [i_1] [(unsigned char)18] [i_0]))))), (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_9 [i_2]))))))))));
                        var_24 = ((/* implicit */_Bool) var_12);
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_0] [13ULL] [13ULL] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_14 [i_1] [i_0] [i_0 - 2] [i_0] [(unsigned char)8] [(unsigned char)8] [(short)19])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [(unsigned char)9] [i_0] [i_1] [i_0]))))) ? (-6394522869771582907LL) : (((/* implicit */long long int) ((int) (unsigned char)224)))));
                        var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_5])) % (((/* implicit */int) ((unsigned char) arr_15 [i_0] [i_1 + 3] [i_2] [i_5] [4ULL]))))) >> ((((((-(9223372036854775807LL))) - (-9223372036854775786LL))) + (29LL)))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_17 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10))))), (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (short)28383))))))) : (((((/* implicit */_Bool) ((1152921504606846464ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33804)))))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170)))))));
                                var_28 *= ((((/* implicit */_Bool) min(((unsigned char)11), (((/* implicit */unsigned char) (signed char)116))))) ? ((~(var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_6 - 1] [i_1 + 1] [i_0 - 2])) ? (arr_7 [i_0 - 1] [i_6 - 1] [i_7]) : (arr_7 [i_0] [i_2] [i_2])))));
                                var_29 *= ((/* implicit */short) var_17);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) arr_15 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 2]);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_8 = 2; i_8 < 10; i_8 += 4) 
    {
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */unsigned long long int) ((2147483647) & (-975718017)))) : (6376994326104209877ULL))))));
        var_32 = ((/* implicit */unsigned char) var_19);
        var_33 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) var_7)))));
        var_34 *= ((/* implicit */short) (signed char)-57);
    }
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                {
                    var_35 = ((/* implicit */unsigned char) (_Bool)1);
                    arr_37 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775785LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) : (min((arr_4 [i_9] [17U] [i_11]), (((/* implicit */unsigned long long int) (unsigned short)31871))))));
                    var_36 = ((/* implicit */unsigned short) (+((-(arr_5 [i_9] [i_10] [(short)10])))));
                    var_37 = ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_10))))))) ? (min((8280573174708571503LL), (((/* implicit */long long int) min((975718022), (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) var_9)) ? ((+(var_5))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned char)10))))))));
                }
            } 
        } 
    } 
}
