/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227272
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_4 [19U] [i_0] = ((/* implicit */signed char) max((max((var_1), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((unsigned char) (signed char)-106)))));
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((((/* implicit */int) (short)-32759)), (min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) (unsigned short)27887)))), (((/* implicit */int) (_Bool)1)))))))));
        var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) min((var_9), (((/* implicit */signed char) (_Bool)1))))), (max((2603574388U), (((/* implicit */unsigned int) var_4))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 4; i_2 < 20; i_2 += 4) 
        {
            var_13 ^= ((/* implicit */_Bool) var_0);
            arr_11 [i_1] = ((/* implicit */unsigned int) ((((var_1) + (9223372036854775807LL))) << (((var_0) - (872045729)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_15 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((((/* implicit */_Bool) 4880868438792023556LL)) ? (((/* implicit */int) var_5)) : (var_3)))));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_3);
            var_15 = ((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)224)) != (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))));
            arr_20 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-4880868438792023562LL)));
        }
        arr_21 [i_1] = ((/* implicit */unsigned short) var_10);
        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (short)32767)) : (-7)));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        arr_24 [i_5] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))));
        arr_25 [12ULL] = ((/* implicit */_Bool) var_1);
    }
    var_18 = ((_Bool) min((max((4880868438792023562LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max((var_0), (var_3))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1691392908U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)18864))) : (-4726653530149553210LL)));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-2528818128572795710LL)));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)61627)) ? (((/* implicit */int) var_2)) : (var_3)));
        arr_33 [(_Bool)1] = ((/* implicit */unsigned long long int) var_2);
        /* LoopNest 3 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_42 [i_7] [i_8] [(unsigned char)15] [13LL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_8)))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)57387)) >= (((/* implicit */int) (_Bool)1)))))));
                        var_23 = var_0;
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (7431018536615045845ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17071129570171029381ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((((/* implicit */int) (unsigned char)251)) < (((/* implicit */int) (_Bool)1)));
}
