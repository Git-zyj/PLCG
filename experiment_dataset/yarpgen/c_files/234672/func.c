/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234672
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) 9223372036854775786LL))));
        var_14 |= ((/* implicit */_Bool) (unsigned short)0);
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (_Bool)1)))) ? (var_0) : ((+((((-2147483647 - 1)) / (((/* implicit */int) (_Bool)1)))))))))));
        var_16 += ((/* implicit */long long int) (unsigned char)1);
    }
    for (signed char i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((-9133316945815000773LL), (((/* implicit */long long int) arr_3 [18U] [i_1 + 1])))), (((/* implicit */long long int) (unsigned char)254))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */int) var_1)) : (var_7)))))) : (max(((-(var_11))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)242)))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                arr_14 [15LL] [i_2] [i_3] [i_4 + 2] [i_4 + 2] [i_1] = ((/* implicit */signed char) arr_9 [i_1 - 1] [i_4 - 1] [i_1 + 1] [i_1 - 1]);
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_6))))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_1] [i_2] [i_2]))))) : (((((3221225472U) % (((/* implicit */unsigned int) var_0)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                var_20 = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) var_2)) - (136))))) % (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1]))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10719)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_10))))))));
                    var_21 = ((/* implicit */short) var_11);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (unsigned char)252))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_1))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_2 [i_6]))))))))));
                }
            } 
        } 
    }
    for (signed char i_8 = 1; i_8 < 20; i_8 += 2) /* same iter space */
    {
        var_24 += ((/* implicit */signed char) ((unsigned short) (short)10719));
        var_25 = ((/* implicit */int) max((var_4), (var_4)));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            {
                var_26 = ((/* implicit */short) (((+(((/* implicit */int) arr_16 [i_10])))) + (((/* implicit */int) ((_Bool) var_4)))));
                var_27 = ((/* implicit */short) max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-20867)) : (((/* implicit */int) (unsigned char)255)))) == (((/* implicit */int) ((((/* implicit */int) arr_4 [i_10])) >= (arr_23 [i_9] [i_10]))))))), ((unsigned char)242)));
                var_28 -= ((/* implicit */short) var_10);
            }
        } 
    } 
    var_29 = ((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) | (max((((/* implicit */long long int) var_10)), (var_12)))))) ? (((int) var_6)) : (((/* implicit */int) ((unsigned short) ((unsigned int) var_12)))));
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (var_12)));
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((int) (unsigned char)188))))) ? (((/* implicit */int) var_8)) : (((((((/* implicit */int) var_1)) / (var_0))) / ((+(((/* implicit */int) var_8))))))));
}
