/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223586
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((int) var_0));
        var_20 = ((/* implicit */_Bool) var_4);
        var_21 = ((_Bool) (~(((/* implicit */int) var_18))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (var_6))))));
            /* LoopSeq 2 */
            for (int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_23 = var_18;
                    var_24 = ((/* implicit */int) (((~(var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) == (var_12)))))));
                }
                var_25 = ((/* implicit */long long int) (~(((/* implicit */int) var_18))));
                var_26 = ((/* implicit */unsigned int) (((-(var_3))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))));
                var_27 = ((/* implicit */long long int) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            }
            for (int i_4 = 1; i_4 < 21; i_4 += 2) 
            {
                var_28 = ((/* implicit */long long int) (~(var_5)));
                arr_13 [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) var_3)));
            }
        }
        for (int i_5 = 3; i_5 < 19; i_5 += 1) 
        {
            var_29 = ((/* implicit */int) (+(var_15)));
            /* LoopSeq 3 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_20 [i_0] = var_14;
                var_30 = ((/* implicit */int) (~(((var_11) ? (var_15) : (var_12)))));
                var_31 = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))));
                arr_21 [i_0 + 1] [i_0] [i_0 + 1] = (!(((/* implicit */_Bool) var_9)));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    arr_24 [i_7] [i_7] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_19) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_19))));
                    var_32 = (!(((/* implicit */_Bool) var_15)));
                }
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) var_19);
                            var_34 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 10LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_3)))));
                            var_35 = ((_Bool) ((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */int) var_18))));
                            var_36 = ((/* implicit */long long int) (+(var_9)));
                        }
                    } 
                } 
                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_17) ? (var_15) : (var_6)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                var_38 = ((/* implicit */int) var_12);
                var_39 = ((/* implicit */_Bool) ((var_16) ? ((~(var_6))) : (var_12)));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (var_4)));
                arr_33 [i_0 + 2] [i_0] = ((/* implicit */unsigned int) (+(((var_19) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))));
            }
            arr_34 [i_0 - 1] [i_0] [i_0 - 1] = (~(((/* implicit */int) var_8)));
            var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
        }
    }
    for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
    {
        arr_38 [i_12] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) | (var_6))))));
        var_42 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) var_9)) : (var_6))) == (min((((/* implicit */unsigned int) (_Bool)0)), (16769024U)))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            for (unsigned int i_14 = 2; i_14 < 11; i_14 += 2) 
            {
                {
                    var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_15))) : ((-(4294967295U)))))) ? ((+((~(var_4))))) : ((-((+(var_4)))))));
                    arr_43 [i_12] [i_12] [i_12] = (((+(var_6))) << ((((-(var_15))) - (3758679833U))));
                }
            } 
        } 
    }
    var_44 = ((/* implicit */_Bool) var_9);
    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (((long long int) var_2))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_2)))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) (~((~(var_13))))))));
}
