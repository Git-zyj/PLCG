/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231030
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
    var_20 |= ((/* implicit */unsigned short) var_18);
    var_21 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) var_11);
                        var_23 = min((((/* implicit */int) var_9)), (arr_3 [i_2]));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */signed char) var_1);
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_25 = ((/* implicit */long long int) (!(var_6)));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    var_26 = ((/* implicit */short) arr_0 [i_0]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) arr_13 [i_4] [i_6] [i_7]);
                        var_28 = ((/* implicit */unsigned short) arr_11 [i_4] [i_5] [i_6]);
                        var_29 = ((/* implicit */unsigned long long int) var_4);
                        var_30 *= ((/* implicit */unsigned long long int) (-(arr_6 [i_7])));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_31 *= ((/* implicit */unsigned long long int) arr_24 [12] [5U] [i_6]);
                        var_32 = ((/* implicit */unsigned short) var_0);
                        var_33 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (signed char)77)), (13603100508085396385ULL))), (((/* implicit */unsigned long long int) min((arr_16 [i_0] [i_4] [i_0]), (((/* implicit */int) arr_8 [i_0] [i_0] [i_5])))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_34 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32757))));
                        var_35 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((/* implicit */int) min((arr_28 [(unsigned short)17] [i_4] [i_0] [i_4] [i_9]), (var_11)))) : (arr_16 [i_0] [i_0 + 1] [i_0])))), (min((((/* implicit */unsigned long long int) arr_1 [i_6] [i_5])), (min((arr_14 [i_6 + 1]), (arr_14 [i_0]))))));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_5] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11185))) : (14127487872777618714ULL)));
                    var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_10] [i_4])) ? (4319256200931932901ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1353427831))))))));
                }
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14127487872777618725ULL)) ? (((((/* implicit */_Bool) arr_24 [i_11] [i_4] [i_0 + 2])) ? (4319256200931932897ULL) : (4319256200931932882ULL))) : (((/* implicit */unsigned long long int) arr_10 [i_0 + 2] [i_0 + 2])))))));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */unsigned long long int) arr_11 [i_5] [i_4] [i_5])) : (arr_2 [i_0])));
                    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) min((arr_22 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_11]), (((/* implicit */long long int) arr_16 [(unsigned short)6] [i_4] [i_11])))))));
                }
                for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                {
                    var_41 += ((/* implicit */long long int) arr_12 [i_0 - 1] [i_0 - 1]);
                    var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (~(max((arr_21 [i_0 + 2]), (((/* implicit */int) arr_12 [i_0] [i_0 + 1])))))))));
                }
                var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_19 [i_0] [i_0] [i_0] [i_0 - 1])))) ? (min((-3826870610650027306LL), (((/* implicit */long long int) (unsigned char)141)))) : (((/* implicit */long long int) arr_27 [i_5] [i_5] [i_4] [i_4] [i_4] [(signed char)0]))));
                var_44 = ((/* implicit */_Bool) var_14);
                var_45 = ((/* implicit */unsigned int) min((min((arr_19 [i_0] [16ULL] [i_4] [i_5]), (((/* implicit */unsigned long long int) ((arr_5 [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_5])) : (arr_25 [i_0] [7U])))))), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_4] [i_0]))));
                var_46 = ((/* implicit */signed char) arr_35 [i_0 + 1] [i_0]);
            }
            var_47 = ((/* implicit */int) max((arr_1 [i_0 + 2] [i_0 + 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 2])))))));
            var_48 = ((/* implicit */_Bool) var_2);
        }
    }
}
