/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39080
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
    var_12 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0)))) > (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (var_3)))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 + 1])) > (arr_1 [i_0 + 2])));
    }
    for (unsigned short i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */short) ((_Bool) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (1786111490)))));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) arr_0 [i_1 - 2]);
                            arr_16 [i_1 + 1] [i_2 + 1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (+(((long long int) (~(((/* implicit */int) arr_15 [i_2] [i_5])))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) /* same iter space */
        {
            arr_19 [i_1] [i_6 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_1 - 3]))));
            var_16 -= ((((((/* implicit */int) var_6)) > (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) arr_5 [i_1 - 3])) : (((unsigned long long int) arr_7 [i_1] [i_6] [i_1 - 1])));
        }
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    {
                        arr_29 [i_1] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? ((~(var_0))) : ((~(((/* implicit */int) (short)27825))))))) ? ((~((~(((/* implicit */int) (short)-1918)))))) : (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-5)))))));
                        var_17 = ((/* implicit */unsigned short) 562949953413120ULL);
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)32408)))) >= ((+(((/* implicit */int) max((((/* implicit */short) var_2)), (var_1)))))))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_0))));
                    }
                } 
            } 
        } 
        arr_30 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_1 - 2] [i_1 + 1] [i_1 + 1] [(unsigned short)6])) : (((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 2] [2ULL]))))));
        arr_31 [i_1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (var_0) : (((/* implicit */int) (signed char)-54))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_1])) % (var_10)))) : (((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1 - 2])) ? (arr_14 [i_1 - 2] [i_1] [i_1 + 1]) : (arr_14 [i_1 + 1] [i_1 + 1] [i_1]))))));
    }
}
