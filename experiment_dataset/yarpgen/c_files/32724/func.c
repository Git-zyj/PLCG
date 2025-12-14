/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32724
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (_Bool)0)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_0]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            var_18 += ((/* implicit */unsigned char) ((int) var_0));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2]))) / (2673153238U)));
            var_20 = ((/* implicit */unsigned short) (-(4294967295U)));
            var_21 = ((/* implicit */unsigned long long int) var_15);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
            var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_15), (4294967280U))))))) & (((/* implicit */int) var_16)));
        }
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 2; i_4 < 23; i_4 += 2) 
            {
                for (unsigned char i_5 = 1; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_7);
                        var_25 = ((/* implicit */unsigned int) -1997327624);
                    }
                } 
            } 
            var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_3])))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) (unsigned short)34784)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
            var_27 = ((/* implicit */int) max((((((/* implicit */_Bool) (-(var_15)))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? ((-(((/* implicit */int) (unsigned char)176)))) : (((/* implicit */int) arr_4 [i_0])))))));
            var_28 |= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3] [i_0])) ? (((/* implicit */int) arr_16 [i_3] [i_3])) : (-1997327623)))), (var_6))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-85)), ((unsigned short)56227))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
    {
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) != (((((/* implicit */_Bool) -1997327624)) ? (arr_17 [i_6]) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                {
                    var_30 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_6] [i_7])) ? (arr_28 [i_6 - 1] [i_6 - 1] [i_8] [i_9] [i_7] [i_9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */unsigned int) arr_21 [i_6] [i_6] [i_6])) : (arr_14 [i_6] [i_6] [i_8] [i_8] [i_9]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            var_32 = ((/* implicit */long long int) (+(var_8)));
                            var_33 = ((/* implicit */unsigned short) ((arr_12 [i_6] [(short)6] [i_8] [i_9]) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) 2681311966U)) ? (var_9) : (((/* implicit */int) var_16))))));
                            var_34 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 308831611)) ? (((/* implicit */int) arr_24 [i_6] [i_7] [i_8] [i_9])) : (((/* implicit */int) (short)22473))))));
                        }
                    }
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned long long int) var_13);
    }
    var_36 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) ((-4682713508023446951LL) >= (((/* implicit */long long int) ((/* implicit */int) var_14)))))), (((unsigned char) (unsigned char)182))))) > ((~((-(((/* implicit */int) (signed char)72))))))));
}
