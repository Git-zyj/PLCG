/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33280
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) ((min((min((-1509984777), (2147483647))), ((-(-2147483647))))) >= (((((2147483647) + (-2147483643))) ^ (-2147483626)))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    arr_7 [i_0] = ((/* implicit */long long int) 2147483640);
                    var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)101)) ? (-2147483647) : (-2147483643))) % (min((((/* implicit */int) (_Bool)1)), (-2147483640)))));
                }
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((min((((/* implicit */int) ((((/* implicit */long long int) -2147483640)) <= (-2850713533297918879LL)))), (((((/* implicit */int) (signed char)64)) - (((/* implicit */int) (signed char)-6)))))) - (min(((-(((/* implicit */int) (_Bool)1)))), ((+(2147483643))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */int) (_Bool)1);
                                var_13 = ((/* implicit */signed char) (((+(7140709520193109798ULL))) << (((((((/* implicit */unsigned long long int) -2147483626)) - (min((2666926720032317020ULL), (((/* implicit */unsigned long long int) -1)))))) - (15779817351529750949ULL)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) (-(((((-8365901601868304811LL) + (9223372036854775807LL))) >> (((/* implicit */int) ((-7770249787328490927LL) < (-7770249787328490927LL))))))));
                }
                /* vectorizable */
                for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) (-(((unsigned int) -48638806))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned char) ((unsigned char) -2147483643))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */signed char) (((_Bool)0) ? (-13) : ((-2147483647 - 1))));
                                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)72))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */long long int) (+(2147483647)))) - (2532612532884620910LL)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 1; i_9 < 21; i_9 += 2) 
    {
        for (unsigned int i_10 = 2; i_10 < 20; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (((~(18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)6)) % (((/* implicit */int) (unsigned char)134)))))));
                            arr_36 [i_9] [i_10] [9] [i_12] = ((((/* implicit */unsigned long long int) ((2032326369) / (((/* implicit */int) (signed char)-7))))) > ((-(18446744073709551615ULL))));
                        }
                    } 
                } 
                arr_37 [i_9] [i_9] = ((/* implicit */int) ((((min((-8681735090294444032LL), (-1221596971498641148LL))) * (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) - (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-21)) + (2147483647))) >> (((((/* implicit */int) (signed char)-4)) + (15))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) (((-(var_8))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))))))));
}
