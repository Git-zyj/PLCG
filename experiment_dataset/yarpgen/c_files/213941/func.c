/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213941
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
    var_11 *= ((/* implicit */_Bool) ((long long int) var_8));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) (((-(arr_1 [i_0]))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) ^ (((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) (signed char)(-127 - 1))))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (signed char)-1);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_2);
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    for (signed char i_1 = 3; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_13 ^= (signed char)14;
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_14 = var_1;
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_1] [i_4]))))), (arr_0 [i_1] [i_3])))) ? (((/* implicit */int) ((short) arr_7 [i_1]))) : (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) != (var_3))))))));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((min((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) arr_9 [i_1])), (arr_5 [i_4]))))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    var_17 *= ((/* implicit */_Bool) (-((+(arr_10 [i_1] [18LL] [i_2])))));
                }
            } 
        } 
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_1] [i_1 - 3] [i_1 - 3] [i_1])), (var_0)))) < (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))));
        var_19 = ((/* implicit */signed char) (short)20253);
        arr_16 [i_1] = (~(((/* implicit */int) ((unsigned short) arr_12 [i_1 + 1] [i_1] [i_1] [i_1]))));
    }
    for (signed char i_5 = 3; i_5 < 21; i_5 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) var_10);
        var_21 = ((/* implicit */int) max((min((arr_14 [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 2] [i_5 - 2]), (((/* implicit */long long int) (signed char)1)))), (min((var_3), (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                for (signed char i_9 = 2; i_9 < 20; i_9 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((var_9) | (((/* implicit */long long int) 1307531264))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)62)), (arr_21 [i_9])))), (var_4)))));
                        arr_29 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_8])) ? (var_3) : (((/* implicit */long long int) arr_21 [i_7])))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (-2503046508348403435LL))))), (((/* implicit */long long int) ((2331657352U) << (((((((/* implicit */int) var_6)) | (arr_20 [i_9]))) + (197251825))))))));
                    }
                } 
            } 
        } 
        arr_30 [i_6] = ((/* implicit */_Bool) (-(((int) min((((/* implicit */unsigned long long int) var_6)), (var_4))))));
    }
}
