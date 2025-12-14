/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219931
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
    var_20 = var_12;
    var_21 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 3350680776U)) + (var_8))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (max((max((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0 + 1]))), (((/* implicit */long long int) ((unsigned int) var_18)))))));
        arr_2 [i_0] &= ((/* implicit */short) arr_1 [(unsigned char)4]);
        var_23 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-14653)))) >= (((/* implicit */int) ((short) arr_1 [i_0 + 1])))));
        var_24 *= ((/* implicit */unsigned char) ((-6133291472743504083LL) == (((/* implicit */long long int) ((unsigned int) (unsigned char)175)))));
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        var_25 = max((min((-2008381627465116912LL), (((/* implicit */long long int) arr_0 [i_1 + 1])))), (((max((var_14), (((/* implicit */long long int) (unsigned char)220)))) - (arr_1 [i_1 + 2]))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned int i_4 = 3; i_4 < 18; i_4 += 4) 
                {
                    {
                        arr_13 [i_4 - 3] [i_4 - 3] [i_1] [(short)6] = (unsigned char)93;
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */int) (_Bool)1)) : (min((((/* implicit */int) (short)29017)), ((~(((/* implicit */int) arr_7 [i_1 - 1] [i_2 - 1]))))))));
                            arr_16 [i_1] [i_2] [i_2] [16LL] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [(unsigned char)4] [i_5]), (((/* implicit */short) arr_9 [i_1]))))))))));
                            var_27 = ((/* implicit */_Bool) -275909334314206447LL);
                        }
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned int) (unsigned char)80);
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 1] [i_3] [i_4 - 1] [i_4 + 2]))))))));
                        }
                        for (short i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) (!(((_Bool) arr_3 [i_1 - 1]))));
                            var_31 = ((/* implicit */long long int) arr_24 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1]);
                            var_32 = ((/* implicit */long long int) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 - 1])) != (((/* implicit */int) arr_5 [i_1 - 1] [i_1]))))) << (((((/* implicit */int) ((short) arr_1 [i_1]))) - (14784)))));
        var_33 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_21 [i_1] [i_1 + 2] [4U] [i_1 + 1] [i_1 + 1])) ? (-7945605212372716528LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))), (((/* implicit */long long int) (~(((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9))))))));
        var_34 = 6629441608018134296LL;
    }
}
