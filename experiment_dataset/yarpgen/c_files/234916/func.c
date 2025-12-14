/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234916
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
    var_15 = ((/* implicit */unsigned char) var_4);
    var_16 = ((/* implicit */int) min(((~((~(7453119369226527528ULL))))), ((~(((var_7) + (var_3)))))));
    var_17 = ((/* implicit */signed char) (((((~(18446744073709551597ULL))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-5033689041472990415LL)))))) - (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15755))) : (var_7))) ^ (((((/* implicit */unsigned long long int) -1848708945)) / (var_3)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) (((~(arr_0 [i_0]))) / (((arr_0 [i_0 + 1]) ^ (2147483628)))));
        var_18 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_2 [i_0 - 1] [i_0])) <= (1364762572))) ? (((/* implicit */int) (unsigned short)2276)) : ((~(((/* implicit */int) arr_2 [i_0] [i_0 - 2])))))) > (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65534)) && (((/* implicit */_Bool) (signed char)16))))), (min(((short)-8), (((/* implicit */short) (_Bool)1)))))))));
        arr_4 [i_0 - 2] = ((/* implicit */short) arr_2 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 0))))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */int) (short)-13832);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (~((~(arr_12 [i_2] [i_2 - 1] [i_2 - 2] [i_2])))));
                            arr_16 [i_3] [i_3 + 1] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) min((min((arr_7 [i_4] [i_4]), (((/* implicit */unsigned int) arr_2 [i_2 + 1] [i_2 - 2])))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) arr_12 [i_0] [i_1 + 1] [i_2 - 2] [i_0 - 1])) : ((~(1652287285U)))))));
                            arr_17 [i_0] [i_3] [i_2 - 1] [i_3 - 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((2829719846U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))))))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0 - 1])) > (((/* implicit */int) arr_14 [i_3 - 1] [i_2] [i_1 - 3] [(_Bool)1]))))) - (((/* implicit */int) arr_9 [i_0 - 2] [i_1 - 1] [i_3 - 1])))) : (((/* implicit */int) arr_11 [i_0 + 1] [i_1 - 2] [i_2 - 1]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
    {
        arr_20 [i_5] [i_5] = arr_14 [i_5] [i_5 + 2] [i_5 - 2] [i_5];
        arr_21 [i_5] [i_5 - 1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((1560437734) <= (((/* implicit */int) arr_15 [i_5 - 1] [i_5] [i_5] [i_5] [i_5 + 2] [i_5] [i_5]))))) % (((/* implicit */int) ((((/* implicit */int) arr_2 [i_5] [i_5 - 1])) >= (((/* implicit */int) (_Bool)1)))))))));
    }
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) 16973813472696609956ULL))));
}
