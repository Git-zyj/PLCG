/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2338
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
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (short)255)) >> (((((/* implicit */int) arr_3 [i_1])) - (184))))))))));
                var_19 -= ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) (unsigned short)0))), (min((var_16), (arr_1 [i_0] [i_1])))))), (((var_17) + (-2147483645)))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(min((var_8), (((/* implicit */int) arr_2 [i_0]))))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_4)))) < (((((/* implicit */int) var_15)) * (((/* implicit */int) var_4)))))));
                            var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((_Bool) arr_2 [i_0])), (((((/* implicit */int) arr_7 [i_0] [i_1])) < (((/* implicit */int) (_Bool)1)))))))));
                            var_23 = ((short) (+(((/* implicit */int) var_10))));
                            var_24 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_1] [i_1] [i_0]), (((/* implicit */short) (_Bool)1))))) || (((/* implicit */_Bool) ((1995090767U) << (((/* implicit */int) arr_2 [i_0]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */short) (-(max(((+(var_3))), (((((/* implicit */int) arr_8 [i_4] [i_4] [i_4 + 2] [i_4] [i_4])) / (((/* implicit */int) (_Bool)1))))))));
        var_26 = ((/* implicit */short) ((((/* implicit */int) (((+(((/* implicit */int) var_5)))) != (max((((/* implicit */int) (unsigned char)127)), (arr_9 [i_4] [i_4])))))) > (((((/* implicit */int) (short)18142)) ^ (1073741823)))));
        var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_12 [i_4 + 1])), (var_2)))), (((unsigned long long int) var_1))));
    }
    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
    {
        var_28 = (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_12 [i_5]))))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_20 [i_5] [i_6] = (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_3)))))));
                    var_29 -= ((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (unsigned char)67)) - (((/* implicit */int) (short)-276))))));
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) arr_8 [i_5 + 1] [i_5] [i_5 - 1] [i_5] [i_5 + 1])), ((short)32760)))))))));
    }
    for (unsigned char i_8 = 1; i_8 < 13; i_8 += 2) /* same iter space */
    {
        arr_23 [i_8] [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (524287)));
        arr_24 [i_8] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (max(((-(arr_0 [i_8 + 2] [i_8]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [(short)16] [i_8 + 1])))))))));
    }
    for (unsigned char i_9 = 2; i_9 < 10; i_9 += 2) 
    {
        arr_27 [i_9 - 2] [i_9] = ((/* implicit */_Bool) min((((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9])))))), (((((/* implicit */int) (short)-283)) & (((/* implicit */int) (short)255))))));
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)27736), (var_10)))) >= ((+(((/* implicit */int) var_14))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)129)), (arr_16 [i_9] [i_9] [i_9])))), ((-(9913607492572803054ULL))))))))));
    }
}
