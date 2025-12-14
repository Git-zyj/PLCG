/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52478
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */signed char) (((((-(-893987968))) < (((/* implicit */int) arr_5 [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1])) ? ((~(arr_8 [i_0] [i_0] [i_0] [i_0] [(unsigned short)7]))) : (1287730982))) : (((/* implicit */int) (unsigned short)16571))));
                            arr_9 [i_0] [i_0] [i_2] [i_2] = min((((int) -893987968)), (min((((((/* implicit */int) var_12)) * (((/* implicit */int) arr_6 [i_0])))), (((((/* implicit */_Bool) -893987968)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (signed char)3);
                            var_19 ^= ((/* implicit */int) var_14);
                            arr_16 [i_4] [i_1] [i_4] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (+(0)))) ? (min((((/* implicit */int) arr_1 [i_0])), (893987967))) : (((int) arr_12 [i_5] [i_4] [i_1] [i_0])));
                            var_20 = ((/* implicit */int) arr_13 [i_0] [i_1] [6ULL] [i_5] [i_4] [i_5]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) (!(max((arr_2 [i_0] [3LL]), (((((/* implicit */_Bool) (signed char)32)) || (((/* implicit */_Bool) 137438953471ULL))))))));
                                var_22 ^= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)0)), (-1)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((min((((/* implicit */int) (_Bool)0)), (max((0), (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [7])))))) << (((((/* implicit */int) var_13)) - (32648)))));
                                var_24 = ((/* implicit */unsigned short) arr_5 [i_0]);
                                var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -893987968)) ? (-9) : (-893987968)))) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [(unsigned char)2] [i_0] [i_11])) : (arr_11 [i_0])));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) var_7);
    var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) ^ (((/* implicit */int) var_12))))));
    var_29 = ((/* implicit */unsigned int) var_8);
}
