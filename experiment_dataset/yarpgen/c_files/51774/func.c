/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51774
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((unsigned long long int) (_Bool)1)) <= (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_5))))))))))));
                                arr_12 [i_1] [i_3] = ((/* implicit */unsigned char) (~(min((((/* implicit */int) ((unsigned char) arr_1 [i_3]))), ((+(-1710609141)))))));
                                var_21 *= ((/* implicit */unsigned char) var_5);
                                arr_13 [i_1] [i_3 + 1] [i_3 - 2] [i_3 - 2] = ((/* implicit */_Bool) (+(max((1978446596626680165ULL), (((/* implicit */unsigned long long int) var_3))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_1] [(unsigned char)12] [i_5] [i_1] = (-((+(((/* implicit */int) var_0)))));
                            /* LoopSeq 1 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_24 [i_7] [i_7] [i_1] [i_7] [i_7] = ((/* implicit */unsigned char) (!(var_2)));
                            }
                            var_23 = min((((/* implicit */int) min((((_Bool) var_13)), (var_16)))), ((~(((/* implicit */int) ((unsigned char) (unsigned char)13))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_19 [i_1]))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_29 [i_1] [i_1] [i_8] [(unsigned char)15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (-1710609119) : (((/* implicit */int) (unsigned char)109))));
                            arr_30 [i_1] [i_8] [(_Bool)0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_17)))))))) * (((var_2) ? (var_6) : ((~(((/* implicit */int) (_Bool)1))))))));
                            var_25 *= ((/* implicit */unsigned char) (-(var_12)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_38 [(_Bool)1] [i_1] [i_10] [i_1] [i_0] = ((/* implicit */unsigned char) var_16);
                                var_26 = (+((+(arr_26 [i_1] [i_1] [i_1]))));
                                var_27 = var_18;
                                var_28 = ((/* implicit */int) max((var_28), ((+((+(min((-1710609141), (((/* implicit */int) var_3))))))))));
                                var_29 &= var_11;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) var_12);
    var_31 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_18))))))), (max((((/* implicit */unsigned long long int) var_13)), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_14)))))));
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 13; i_13 += 2) 
    {
        for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 3) 
        {
            {
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)181)) >= (1984986635)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (var_0)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5))))));
                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) min(((~(4217988493976959933ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)27)) & (((/* implicit */int) min(((unsigned char)32), (((/* implicit */unsigned char) var_3)))))))))))));
            }
        } 
    } 
}
