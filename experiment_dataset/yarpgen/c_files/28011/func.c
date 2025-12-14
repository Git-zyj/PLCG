/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28011
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
    var_15 = ((/* implicit */_Bool) ((short) (+(((unsigned int) (signed char)31)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0 + 4] [i_0] = ((/* implicit */unsigned short) min(((+(min((8191LL), (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : ((+(((/* implicit */int) var_5)))))))));
        var_16 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) ((((/* implicit */_Bool) -484731762485719013LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_1 = 4; i_1 < 17; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((3722808369736549924LL), (((/* implicit */long long int) (signed char)-12))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                {
                    var_18 = ((unsigned long long int) min((-7261466788885290482LL), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)11)))))));
                    arr_15 [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) (~((~((~(-5502846135308832030LL)))))));
    }
    /* LoopSeq 2 */
    for (short i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        var_20 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)25535))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    {
                        arr_28 [i_4] [i_4] [17LL] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) min((((int) var_14)), (((/* implicit */int) ((unsigned short) arr_1 [i_4])))))) ? (((((/* implicit */_Bool) ((signed char) var_13))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [10LL] [i_5] [i_7]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)11)), (arr_18 [5LL] [5LL])))))) : ((-(((/* implicit */int) min((((/* implicit */signed char) var_8)), (arr_25 [i_7] [i_5] [i_6] [i_4]))))))));
                        arr_29 [i_7] [i_4] [1U] [i_5 + 2] [i_4] [(unsigned char)9] = ((/* implicit */long long int) ((short) (+(((((/* implicit */_Bool) var_14)) ? (4503591037435904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_33 [i_7] [i_7] [i_7] [i_4] [i_8] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) min((4747823279885788194ULL), (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_7] [(unsigned short)6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_30 [i_4] [i_5] [i_4]) : (((/* implicit */int) arr_16 [i_4]))))) : (((((/* implicit */_Bool) 3780480760U)) ? (arr_17 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) max((min((var_13), (10112241095798846LL))), (((/* implicit */long long int) ((var_9) ? (var_2) : (var_1))))))))));
                            var_22 = ((signed char) min((((long long int) var_3)), (((/* implicit */long long int) min((arr_9 [i_6]), (((/* implicit */unsigned char) arr_27 [6ULL] [(short)8] [i_4] [i_7] [i_8])))))));
                            arr_34 [i_8] [(unsigned short)0] [i_6] [i_7] [i_4] [(unsigned short)0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_6 [i_4])), (arr_2 [i_8])))))) ? (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_5 [(unsigned char)8])))), (((((/* implicit */_Bool) 2166412768U)) ? (((/* implicit */int) arr_21 [i_5] [i_7] [i_8])) : (((/* implicit */int) arr_6 [i_7]))))))) : (min((((long long int) (short)32740)), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        arr_38 [i_9] [i_9] = (~(3780480750U));
        arr_39 [i_9] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)12)), ((short)32740)))))))));
        arr_40 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 1325945292477308995LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_17 [i_9]), (((/* implicit */unsigned long long int) var_5)))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_22 [i_9] [16LL])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_35 [i_9]))))))));
    }
}
