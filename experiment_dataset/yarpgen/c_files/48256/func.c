/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48256
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
    for (signed char i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), ((+(((/* implicit */int) (_Bool)1))))))) ? ((+((+(((/* implicit */int) (unsigned char)184)))))) : (((/* implicit */int) var_16))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((3773412035304603430LL) >> (((((/* implicit */_Bool) 33550336ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))), (((/* implicit */long long int) ((unsigned short) max((var_12), (((/* implicit */unsigned short) var_16)))))))))));
                var_20 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))) : (18446744073676001249ULL))) + (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned short)37410), (var_12)))), (((((/* implicit */int) var_2)) * (((/* implicit */int) var_6)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) * ((-(((/* implicit */int) arr_9 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)5909)) - (((/* implicit */int) arr_10 [i_2] [i_3] [i_4]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_8 [i_2] [6U])))), (arr_7 [(_Bool)1])))));
                    arr_13 [(_Bool)1] [i_3] [i_4] = ((/* implicit */short) min(((unsigned short)43025), (((/* implicit */unsigned short) (signed char)-119))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((arr_7 [i_2]), (((/* implicit */unsigned long long int) arr_9 [i_2])))))));
                    var_23 += ((/* implicit */short) (_Bool)1);
                    var_24 = (!(((/* implicit */_Bool) (-(-2680486572530556377LL)))));
                }
            } 
        } 
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28125)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) max(((unsigned short)6599), (((/* implicit */unsigned short) arr_10 [i_2] [i_2] [i_2])))))))) : (((((/* implicit */_Bool) var_16)) ? (9287045532808764966ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) != (((/* implicit */int) var_16))))))))));
        arr_15 [i_2] = ((/* implicit */unsigned char) arr_8 [i_2] [i_2]);
        var_25 = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))), ((-(((long long int) arr_11 [i_2] [i_2] [i_2] [i_2]))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((/* implicit */int) (!(arr_17 [i_5])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53889)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */int) var_3)) + (((/* implicit */int) arr_16 [i_5])))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_16 [i_5])))))))))));
        arr_18 [i_5] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_8))))) <= (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (unsigned short)50228)))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_9))));
        var_28 = ((/* implicit */unsigned short) (signed char)67);
    }
    var_29 = ((/* implicit */signed char) var_1);
}
