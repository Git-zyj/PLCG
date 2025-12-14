/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5415
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
    var_20 -= ((/* implicit */unsigned long long int) max(((~(((((/* implicit */unsigned int) ((/* implicit */int) (short)2032))) + (var_8))))), (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)64164)))) != ((~(((/* implicit */int) var_17)))))))));
    var_21 &= ((/* implicit */short) var_17);
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (signed char)105)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) + (4065777193U)));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)2643))))) ? (var_15) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) * (3117802584U))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 4065777186U)) >= (var_6)))) >= ((~(((/* implicit */int) (_Bool)0))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            arr_17 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) - (var_15))))));
            var_24 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)-2643)) ? (549755813887LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 134086656U)) ? (3334911639U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (var_10)));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_26 [i_4] = ((/* implicit */long long int) (-((~(((/* implicit */int) (short)3072))))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)241)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (149))))))))));
                            var_27 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (~((~(var_15))))))));
                        }
                        var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)241))));
                    }
                } 
            } 
            arr_27 [i_0] [i_4] [i_0] = ((/* implicit */signed char) var_1);
        }
        arr_28 [i_0] = ((/* implicit */unsigned short) (-(((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35474)))))));
    }
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        arr_31 [i_8] [i_8] = (((-(((/* implicit */int) var_3)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) * (var_11))))))));
        var_30 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) var_8)))))))) % (((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) + (var_13))) : ((~(var_6)))))));
    }
}
