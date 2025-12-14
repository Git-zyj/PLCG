/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205809
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_16 = ((/* implicit */signed char) -4461161205120843584LL);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned short) ((var_10) ? ((-(((/* implicit */int) (!((_Bool)0)))))) : ((((-(((/* implicit */int) var_1)))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-14913)) : (((/* implicit */int) var_8))))))));
                                var_18 = ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_6)));
                                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_1)), (var_13)));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */unsigned short) var_2);
                }
                for (unsigned int i_5 = 3; i_5 < 23; i_5 += 2) 
                {
                    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (short)14924))));
                    var_22 ^= var_15;
                }
                for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                                arr_25 [i_0] [i_0] [i_6] [i_7] [i_8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 268435455)), (((var_2) / (((/* implicit */unsigned long long int) var_15))))))) ? (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) (short)-14913))))) : ((-(max((((/* implicit */unsigned long long int) var_8)), (15066576832088295702ULL)))))));
                                arr_26 [i_1] [i_6] [i_7] [i_8] = (((!(((/* implicit */_Bool) (-(9223372036854775807LL)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2016)) ? (((/* implicit */unsigned long long int) var_9)) : (var_4)))))))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (-(2390247223728230731ULL))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))))), (var_3)));
                    var_26 += ((/* implicit */short) min((((((/* implicit */unsigned long long int) var_5)) * (var_2))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0U)))))));
                    arr_27 [13LL] [(unsigned char)11] [i_6] [i_6] = ((/* implicit */signed char) (short)-2017);
                }
                var_27 &= ((/* implicit */short) (!(var_1)));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -268435456)))))) / (((((/* implicit */_Bool) -268435447)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                            var_29 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned long long int) ((-1127840822541881681LL) & (((/* implicit */long long int) var_11)))))));
                            var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) -12)), (((var_1) ? (9223372036854775807LL) : (((/* implicit */long long int) 0U)))))))));
                            arr_33 [i_0] [i_0] [i_10] [i_10] = ((/* implicit */int) ((((((((/* implicit */_Bool) (short)14913)) ? (var_4) : (((/* implicit */unsigned long long int) var_15)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1127840822541881691LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (8359060658031567374LL)))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    for (signed char i_12 = 3; i_12 < 23; i_12 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) var_9))));
                            arr_38 [i_11] [i_11] [i_1] [i_0] &= ((/* implicit */signed char) max(((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (1115926411686605277LL)))))), (min((-268435447), (((/* implicit */int) var_1))))));
                            var_33 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (268435455))))))));
                        }
                    } 
                } 
                arr_39 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)504)) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-90)))))) : (max((((/* implicit */unsigned long long int) var_9)), (var_13)))))));
            }
        } 
    } 
    var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (min((var_15), (((/* implicit */long long int) (unsigned short)60621)))))))));
}
