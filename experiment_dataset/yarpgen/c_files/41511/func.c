/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41511
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 3U)) ? (5633704230921335342ULL) : (12063952319084947496ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            arr_5 [i_1] = var_6;
            arr_6 [i_1] = ((/* implicit */long long int) (signed char)-83);
            var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) 25781643833148852LL)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_12))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 2) 
                {
                    for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 611711526)) ? (((18446744073709551615ULL) ^ (5633704230921335342ULL))) : (576460752303423487ULL)));
                            var_23 ^= ((/* implicit */unsigned char) ((long long int) (unsigned char)210));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_24 &= ((/* implicit */signed char) (((((_Bool)1) ? (15711864163700561436ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)56882))))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-16779)) ? (((((/* implicit */_Bool) (signed char)-83)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) ((var_7) & (((/* implicit */int) (short)16997)))))));
        }
        arr_20 [12ULL] = var_1;
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            {
                var_26 = max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)95)), ((unsigned short)65535)))), (266531075938483061ULL));
                var_27 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)33)) << (((2734879910008990168ULL) - (2734879910008990164ULL)))));
                var_28 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)92)), (-3185464427869411256LL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_8 = 3; i_8 < 11; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 4; i_10 < 9; i_10 += 4) 
            {
                {
                    var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(6382791754624604119ULL)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) 65587369644542520LL)) : (6382791754624604119ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-116)), (var_5)))))), (((/* implicit */unsigned long long int) (((+(6382791754624604091ULL))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)9181))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        arr_39 [i_10] [(unsigned short)10] [i_10] [i_11] [i_11] [i_9 - 3] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)40))))) ? (((((/* implicit */_Bool) 1904382204U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)10772)))) : (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) (signed char)0)))))));
                        var_30 = ((/* implicit */signed char) ((var_10) - (18180212997771068581ULL)));
                    }
                }
            } 
        } 
        var_31 *= ((/* implicit */unsigned int) max((min((((((/* implicit */long long int) ((/* implicit */int) var_19))) ^ (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (1904382188U) : (((/* implicit */unsigned int) -1477253237))))))), (((long long int) min((var_5), (((/* implicit */long long int) var_1)))))));
        var_32 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 371260335352855221ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551595ULL))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_17))) || ((!(((/* implicit */_Bool) 1616530014U)))))))));
    }
    var_33 += ((/* implicit */int) var_5);
}
