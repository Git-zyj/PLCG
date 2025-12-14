/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234762
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
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (3520706516U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (-1461347103)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 - 1]))))))))));
            var_21 = ((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 1]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_9 [i_0] [i_0] = arr_6 [i_0] [i_2] [i_2];
            var_22 ^= ((/* implicit */unsigned char) (-(min((arr_5 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (3670100216U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37113))))))))));
            arr_10 [i_2] [i_2] = ((/* implicit */_Bool) 3670100216U);
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((min((624867098U), (((/* implicit */unsigned int) max(((unsigned char)85), (((/* implicit */unsigned char) (signed char)112))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1])))))));
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)215)), (11631653899255402611ULL))))));
                        var_24 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)116))))));
                    }
                } 
            } 
            arr_20 [i_0] [i_3] = ((/* implicit */unsigned int) (-(((((((/* implicit */int) arr_8 [i_0 - 2])) | (((/* implicit */int) var_6)))) << ((((((~(((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_0] [i_0] [i_0])))) + (115))) - (22)))))));
            arr_21 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) arr_8 [i_0 - 1]);
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)58057)) ? (((/* implicit */int) (unsigned short)58046)) : (((/* implicit */int) (unsigned short)61464)))) : ((-((-(((/* implicit */int) (_Bool)1)))))))))));
        }
        var_26 -= ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) (unsigned short)7497)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28581))) : (3670100216U))), (((/* implicit */unsigned int) arr_18 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))));
    }
    for (long long int i_6 = 2; i_6 < 10; i_6 += 3) 
    {
        var_27 *= ((/* implicit */short) ((((((/* implicit */_Bool) 580131821776353561ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((3010236974067480532ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) - (((/* implicit */unsigned long long int) -1908991675))));
        arr_24 [(unsigned short)0] = ((((/* implicit */_Bool) (+(17516654969604329883ULL)))) ? (((/* implicit */int) (signed char)-32)) : (((((/* implicit */int) (short)28569)) + (((/* implicit */int) (unsigned char)255)))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_30 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) var_2)) : (var_14))))));
                    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) arr_16 [i_7 - 1])) : (((/* implicit */int) arr_13 [i_6] [i_6])))), (1908991672))))));
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (+((+(arr_1 [i_6 - 2] [i_6 - 2]))))))));
                    arr_31 [i_6] [i_7 + 1] [i_8] = ((/* implicit */int) (+(max((((((/* implicit */_Bool) 8584897485119871397LL)) ? (17516654969604329865ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)116)) ^ (((/* implicit */int) arr_16 [i_6 - 2])))))))));
                }
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        arr_34 [i_9] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)28595)) ? (((/* implicit */int) arr_16 [0])) : (((/* implicit */int) arr_16 [(signed char)22]))))));
        arr_35 [i_9] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)44))))));
    }
    var_30 = max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))))), (max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (min((2524062992580892386LL), (((/* implicit */long long int) var_0)))))));
}
