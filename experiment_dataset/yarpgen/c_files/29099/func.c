/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29099
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
    var_13 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) var_10);
            var_14 = ((/* implicit */_Bool) var_2);
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned char)255)) ? ((-(((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) var_10))))));
        }
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) -5799606925749908140LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) var_10))))) ? (min((((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 2])), (var_5))) : (var_5)));
    }
    for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) arr_4 [i_2] [2] [i_2]))))))) ? (((((/* implicit */unsigned int) arr_8 [i_2 - 1])) - (var_1))) : (((unsigned int) var_5))));
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) (~(var_9)))))));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = var_6;
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned char) arr_14 [i_3]);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10120028367119466621ULL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_4]))))) : (((((/* implicit */unsigned long long int) arr_11 [i_3])) / (var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_12)));
            /* LoopNest 3 */
            for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        {
                            var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_3] [(short)12] [(short)12] [i_6] [(unsigned short)10] [i_6])) ? ((~(var_9))) : (var_6)))));
                            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                        }
                    } 
                } 
            } 
            arr_28 [i_3] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned long long int) var_10));
        }
        for (long long int i_8 = 4; i_8 < 23; i_8 += 1) 
        {
            var_21 = ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) var_10)));
            var_22 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [i_3] [16U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967295U)))) ? (((/* implicit */long long int) arr_27 [i_3] [i_3] [i_3] [i_8] [i_8])) : (min((((/* implicit */long long int) var_8)), (var_9)))))));
            var_23 = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (unsigned int i_9 = 1; i_9 < 20; i_9 += 2) 
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (var_7) : (((/* implicit */long long int) ((int) var_10)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_31 [i_9 - 1] [3LL] [i_9]))))) : (arr_20 [i_3])));
            arr_34 [i_3] [i_9] = ((/* implicit */unsigned long long int) var_12);
        }
        var_25 = ((/* implicit */unsigned int) (_Bool)1);
        var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_13 [14U])) ? (-8574341715123275529LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) arr_25 [i_3]))));
    }
    for (signed char i_10 = 2; i_10 < 22; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            var_27 = ((((/* implicit */_Bool) var_6)) ? (var_12) : (((((/* implicit */_Bool) arr_32 [i_11])) ? (((arr_31 [16U] [i_11] [i_11]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10] [i_10] [i_11]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
            var_28 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_33 [i_10] [i_11] [i_11]))))));
            var_29 = ((/* implicit */short) arr_24 [i_10] [i_10] [i_10] [i_11] [i_11] [i_11]);
            var_30 = ((/* implicit */long long int) arr_29 [i_10]);
            arr_40 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [i_11])))))));
        }
        var_31 = ((((((/* implicit */int) arr_18 [i_10] [i_10 - 1] [i_10 - 1])) > (((/* implicit */int) arr_18 [(_Bool)1] [i_10 + 1] [i_10 + 1])))) ? (((arr_18 [(signed char)22] [i_10 + 1] [i_10 - 1]) ? (((/* implicit */int) arr_18 [i_10 - 2] [i_10 - 1] [i_10 - 2])) : (((/* implicit */int) arr_18 [i_10 - 1] [i_10 - 2] [i_10 - 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_10] [i_10 + 1] [i_10 - 1])) != (((/* implicit */int) (_Bool)1))))));
    }
    var_32 = ((/* implicit */signed char) var_10);
}
