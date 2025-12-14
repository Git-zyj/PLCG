/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235060
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
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned char)227)))), ((+(((/* implicit */int) var_13))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)29)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1745832320147248221LL)) ? (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
        var_18 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))) : (arr_0 [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (-1745832320147248221LL)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (~(1745832320147248221LL)));
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((var_12) ^ (arr_1 [i_0 - 1])));
            arr_8 [i_0 - 1] = arr_5 [i_0];
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1745832320147248220LL)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (_Bool)0))));
                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)176)) << (((/* implicit */int) (_Bool)1))));
            }
            var_21 = (~(((/* implicit */int) ((var_0) < (((/* implicit */int) (unsigned short)65519))))));
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_22 = (!(((/* implicit */_Bool) (unsigned char)29)));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3384072978U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)65516))));
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_4]))));
                        }
                    } 
                } 
            } 
            arr_24 [i_0] [i_3] = ((/* implicit */signed char) ((((arr_0 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1745832320147248221LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)127)))))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : ((~(var_12)))));
        }
    }
    for (unsigned char i_7 = 1; i_7 < 24; i_7 += 1) /* same iter space */
    {
        var_26 &= ((/* implicit */_Bool) ((arr_15 [i_7 - 1] [i_7 + 1] [8ULL]) >> (((((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)-75)))) % (((/* implicit */int) ((_Bool) (unsigned short)65517)))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_39 [i_7] [i_8] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)39))));
                                arr_40 [i_7] [i_10] [i_9] [i_10] [i_10] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (unsigned char)248)) : (-1401839762))));
                                arr_41 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((14814754556998792263ULL), (((/* implicit */unsigned long long int) arr_17 [i_10]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_10])) ? (((/* implicit */int) arr_17 [i_10])) : (((/* implicit */int) arr_17 [i_10]))))) : (max((((/* implicit */long long int) (unsigned char)88)), (var_8)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_12]))));
                        arr_46 [i_12] [i_9] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)250))))) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((var_11) ? (arr_15 [i_8] [i_9] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(signed char)15] [(signed char)15])))));
                    }
                }
            } 
        } 
    }
    var_28 = ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
    var_29 = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */unsigned long long int) ((long long int) var_5))) : (var_10)));
}
