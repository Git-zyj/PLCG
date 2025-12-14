/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222852
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
    var_14 -= (unsigned char)224;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (172810152041834834LL)))))))));
                                var_16 = ((/* implicit */unsigned char) min(((+((+(((/* implicit */int) (unsigned short)33770)))))), (((/* implicit */int) (unsigned short)31776))));
                            }
                        } 
                    } 
                    arr_11 [i_2] [i_1] [i_2] = min((((/* implicit */unsigned long long int) ((long long int) (unsigned short)31758))), (((((/* implicit */unsigned long long int) ((long long int) var_10))) / (var_9))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned short)33796))));
                    arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)33770)))) ? (((unsigned long long int) min((17340330083713896082ULL), (var_11)))) : (3226767079453503636ULL)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) -9223372036854775789LL);
    var_19 = ((/* implicit */unsigned char) ((_Bool) 6917063530193081377ULL));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_6)))))))))));
                arr_19 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((0ULL) > (1106413989995655533ULL))))));
            }
        } 
    } 
}
