/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27400
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (-(-1484478394)));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (10508118635548194982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32942)))));
                var_20 = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (max((((/* implicit */long long int) (short)32749)), (var_8))))), (((/* implicit */long long int) (signed char)127))));
                var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (var_8)));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_22 |= ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)32591)) < (((/* implicit */int) var_11)))))))), (((long long int) 1484478393))));
                                arr_12 [i_1] = ((/* implicit */_Bool) var_8);
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)99)), (var_14)))) ^ (((/* implicit */int) (short)31747))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_24 -= min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_5), (var_7)))));
                            /* LoopSeq 2 */
                            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                            {
                                var_25 = ((/* implicit */_Bool) ((short) ((unsigned short) ((((/* implicit */_Bool) -641708871)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                                var_26 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) & (-6584946071683030711LL)))))) >> (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (13960853337488692751ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) - (13960853337488692747ULL)))));
                            }
                            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                            {
                                var_27 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) 1484478379)) - (var_8))));
                                var_28 = ((/* implicit */signed char) (-(((/* implicit */int) (short)32767))));
                                arr_29 [i_5] [i_8] = ((/* implicit */_Bool) (unsigned short)29753);
                            }
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (_Bool)1)) != (var_2))));
}
