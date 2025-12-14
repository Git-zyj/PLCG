/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211480
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_6))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)222)) == (((/* implicit */int) var_2)))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (unsigned char)222))))), (var_1)))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), ((unsigned char)248))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            var_13 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))) / (var_1));
            var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
            var_15 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))));
            arr_6 [i_1] [i_1 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)235)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1671313164)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)7])) : (((/* implicit */int) (unsigned char)240)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_2])) || (((/* implicit */_Bool) (unsigned char)252))));
                        arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_1 + 3] [i_1 - 1] [i_1 + 2])) : (((((/* implicit */int) var_5)) - (((/* implicit */int) var_0))))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 2) /* same iter space */
        {
            arr_18 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_5))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4 + 1] [9])) ? ((-(((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [(unsigned char)0])))) : (((((/* implicit */int) var_5)) * (((/* implicit */int) var_2))))));
                            var_17 = ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))));
                            arr_26 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7888931286926309158ULL)) ? (((/* implicit */int) (short)19)) : (arr_20 [i_6] [i_0] [i_6] [i_5]))))));
                            arr_27 [i_0] [i_0] [(unsigned char)6] [i_6] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_4 - 3] [i_4 - 2] [i_4 - 2] [i_4 - 3])) ? (arr_19 [i_4 - 2] [i_4] [i_4] [(signed char)2]) : (((/* implicit */int) (unsigned char)222))));
                        }
                    } 
                } 
            } 
            arr_28 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))) | (var_8));
            arr_29 [(unsigned char)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_0] [i_4] [i_0])) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_4))))));
        }
        for (unsigned char i_8 = 3; i_8 < 10; i_8 += 2) /* same iter space */
        {
            arr_32 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned short)0)))))));
            arr_33 [i_0] [i_8] = ((/* implicit */unsigned long long int) var_10);
            arr_34 [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)243)))) || ((!(((/* implicit */_Bool) var_9))))));
            var_18 = ((((/* implicit */long long int) ((/* implicit */int) (short)10148))) - (-8853203801156722509LL));
        }
        var_19 = ((/* implicit */unsigned short) ((unsigned char) var_7));
    }
    var_20 = ((/* implicit */unsigned char) var_3);
}
