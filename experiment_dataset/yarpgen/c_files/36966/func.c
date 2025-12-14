/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36966
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((min(((unsigned short)19371), (((/* implicit */unsigned short) (unsigned char)255)))), (((/* implicit */unsigned short) ((-494214338) < (((/* implicit */int) (unsigned short)19357))))))))));
                var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((int) (short)-23600)), (((/* implicit */int) (unsigned short)20788))))), (max((max((((/* implicit */unsigned long long int) (unsigned short)20777)), (0ULL))), (((/* implicit */unsigned long long int) 396318594U))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19377))) | (max((((/* implicit */unsigned long long int) (unsigned short)20788)), (28ULL))))), (((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2200861333068144503LL)))) & (max((0ULL), (13181861851720374889ULL)))))));
                                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32752))) + (3898648701U))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0 - 1] = ((long long int) (~(((/* implicit */int) (short)4))));
            }
        } 
    } 
    var_19 += ((/* implicit */_Bool) ((unsigned char) min((max((-494214338), (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)512))))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2147483647)), (2200861333068144510LL)))), (0ULL)));
                var_21 = ((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned long long int) 8388520467369047592LL)), (12291160757607695991ULL))));
            }
        } 
    } 
}
