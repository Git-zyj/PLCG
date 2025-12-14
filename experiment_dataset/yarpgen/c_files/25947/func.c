/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25947
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
    var_11 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) var_0)), (((unsigned int) (signed char)81)))) < (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (signed char)81))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 &= ((/* implicit */signed char) arr_3 [i_1 + 2] [i_0 - 3]);
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 -= ((/* implicit */unsigned int) ((((0ULL) * (min((((/* implicit */unsigned long long int) (signed char)127)), (0ULL))))) ^ (10ULL)));
                    var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1))))) || ((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_0]))))))));
                }
                for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    arr_10 [(unsigned short)11] [i_1] [i_1 - 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(unsigned char)16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (arr_5 [i_0] [i_0 + 3] [i_0])));
                    arr_11 [i_3] [i_1] [i_1] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((1850661509U), (((/* implicit */unsigned int) var_3)))))))), (14062452676233686691ULL));
                }
                for (long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_6))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 *= ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (unsigned short)7862)), (var_4)))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_1]))) % (arr_5 [i_0] [i_0] [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_7) : (arr_3 [i_6] [4U])))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)-84))))), (12530434376008275883ULL))));
                                var_17 = ((/* implicit */unsigned char) var_7);
                                arr_19 [i_0] [i_0 + 3] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) arr_12 [i_0 - 3])))))));
                            }
                        } 
                    } 
                    arr_20 [i_4] [i_0 + 3] [i_4] [i_0] = ((/* implicit */unsigned char) var_1);
                    var_18 = ((/* implicit */unsigned char) -4577891286318298519LL);
                }
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_19 -= ((/* implicit */unsigned long long int) var_1);
                    arr_25 [(signed char)13] [i_7] [i_7] = ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) 3ULL)))) ? (arr_6 [i_0] [i_1] [i_7]) : (((/* implicit */unsigned int) ((int) arr_14 [i_0] [i_1 + 2] [i_7] [i_0] [i_7] [i_0]))))), (((/* implicit */unsigned int) (~(min((((/* implicit */int) (signed char)-81)), (var_9))))))));
                }
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)45), (((/* implicit */unsigned char) (signed char)84)))))) - (((((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned long long int) var_7)) : (5916309697701275733ULL))) - (min((447465185675935078ULL), (((/* implicit */unsigned long long int) arr_13 [13] [i_1 - 2]))))))));
            }
        } 
    } 
}
