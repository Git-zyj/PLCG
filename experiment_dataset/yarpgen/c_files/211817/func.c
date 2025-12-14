/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211817
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
    for (short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */int) ((unsigned char) min(((short)10461), (((/* implicit */short) (signed char)-30)))));
                    var_18 = min((((/* implicit */unsigned int) var_9)), (var_7));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)21268)) <= (((/* implicit */int) (unsigned char)74))));
                    var_20 = ((/* implicit */long long int) (+(10209504177456816076ULL)));
                }
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) var_13)), (var_14))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_12))))))));
                var_22 = ((/* implicit */unsigned long long int) (~(max((((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((1023591281U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1023591269U)))) ? (((/* implicit */int) var_12)) : (min((-1447842561), (((/* implicit */int) (_Bool)1)))))))));
    var_24 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-15)), (((3271376030U) | (1023591276U)))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3309105864907872882LL)) ? (((/* implicit */int) (short)13)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)4)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_0)))) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopSeq 3 */
    for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
    {
        var_26 = ((/* implicit */short) (~(var_5)));
        arr_17 [i_4] [i_4] = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_17)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17572313586276220586ULL))))) : ((+(((((/* implicit */int) (unsigned char)198)) * (((/* implicit */int) (signed char)-107)))))));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((int) (-(min((((/* implicit */long long int) var_0)), (var_8))))));
    }
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 3; i_6 < 16; i_6 += 1) 
        {
            arr_23 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned int) (short)-12)) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 3271376031U)) : (5736034268605712672ULL)))))) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_8))))), (var_11))))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)233)) ^ (((/* implicit */int) (signed char)-107))))) ? (((var_14) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3271376031U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-20234)))))))) : (min((((/* implicit */unsigned long long int) (unsigned char)49)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) | (15930669428186766199ULL)))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            arr_27 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 3271376031U)) != (13396365407040785115ULL)))) * ((-(((/* implicit */int) (_Bool)1))))));
            var_28 *= ((/* implicit */short) (+(((/* implicit */int) var_15))));
        }
        var_29 = ((/* implicit */_Bool) (~(var_16)));
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (short)-2)))))))))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    {
                        arr_39 [i_11] = ((/* implicit */unsigned int) var_14);
                        var_31 = ((/* implicit */_Bool) (~((+(var_16)))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_15))) ^ ((+((-(((/* implicit */int) var_13))))))));
                    }
                } 
            } 
        } 
    }
}
