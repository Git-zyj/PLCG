/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220041
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2 - 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))) / (10578206530152380393ULL))) : (((/* implicit */unsigned long long int) min((738564864), (((/* implicit */int) (signed char)33)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) 7868537543557171233ULL)))))) : (min((((/* implicit */unsigned long long int) min(((short)22185), (((/* implicit */short) (signed char)-40))))), (10578206530152380398ULL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_11 [i_4] [i_1] [4U] [i_3] [i_3 - 1] [10U] [(short)11] = ((/* implicit */long long int) 7868537543557171211ULL);
                                arr_12 [i_4] [i_1] [(short)9] [i_3 + 1] [1U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_8 [i_4 - 2] [i_3 + 2] [i_2] [i_2 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))))) ^ ((+(10578206530152380382ULL)))));
                                var_16 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (2251063117356292355LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_4 [(signed char)0])) ? (7868537543557171210ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [1ULL] [i_2] [i_3 + 1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3728)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (short)32767)))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)25159);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1736134835U)) || (((/* implicit */_Bool) (signed char)-71)))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) arr_17 [(signed char)8]);
                            var_19 = ((/* implicit */short) min((7868537543557171240ULL), (10578206530152380385ULL)));
                            var_20 = ((/* implicit */short) ((((/* implicit */int) (!(arr_22 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_5])))) << ((-(((/* implicit */int) arr_22 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_5]))))));
                            var_21 *= ((/* implicit */_Bool) (~(((unsigned int) arr_16 [i_6 + 1]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) arr_22 [i_5] [i_5] [i_6] [i_6 + 1] [i_6]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        for (int i_10 = 2; i_10 < 19; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            arr_34 [i_9] [2U] [(signed char)3] [i_11] [i_11] [i_12] = ((/* implicit */long long int) ((max((7868537543557171217ULL), (5535105806016587790ULL))) << (((((5535105806016587790ULL) >> (((7868537543557171201ULL) - (7868537543557171181ULL))))) - (5278688245742ULL)))));
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) arr_25 [i_12])))), (7868537543557171235ULL)));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10 - 2] [i_10 - 2]))) & (arr_27 [i_10 - 2] [i_10 - 2]))), (((arr_27 [i_10 - 2] [i_10 - 2]) & (arr_27 [i_10 - 2] [i_10 - 2])))));
                var_25 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_30 [i_10] [i_10] [i_10] [i_10 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-39))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_9]))))))));
            }
        } 
    } 
    var_26 = var_0;
}
