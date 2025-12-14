/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235034
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-21)), (arr_0 [i_0] [i_0])))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) -3801291385491444825LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ^ (((arr_2 [i_0]) / (arr_2 [i_0])))));
        arr_4 [i_0] = ((/* implicit */int) ((short) (signed char)-84));
        arr_5 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */unsigned long long int) 1265547183)), (140462610448384ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_3 [i_0])))) / (arr_2 [i_0])));
        var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(var_9)))) ? (((-1842780364) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) min(((unsigned char)31), (((/* implicit */unsigned char) var_12))))))), (((/* implicit */int) (unsigned char)0))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)25233)))))))));
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */short) (~(-9168218409520186034LL)));
                            arr_19 [i_3] [i_4] [i_3 - 1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5214975716952538213LL)) ? (arr_10 [i_5] [i_3 - 1]) : (arr_10 [i_4] [i_3 + 1])));
                            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 14772172263701672254ULL)))) : (((((/* implicit */_Bool) 5214975716952538213LL)) ? (3674571810007879362ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) var_0)))));
                            var_24 = ((/* implicit */signed char) (~(8887348726655877984LL)));
                        }
                        var_25 = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_16)) > (((/* implicit */int) arr_13 [i_3] [i_3])))));
                    }
                } 
            } 
            arr_20 [(signed char)0] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-52752871365906217LL)));
        }
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        arr_28 [i_1] [(signed char)12] [i_8] [i_8] = arr_13 [i_8] [i_7];
                        var_26 ^= ((/* implicit */unsigned int) arr_23 [i_8] [i_1] [i_1]);
                        var_27 = ((/* implicit */unsigned long long int) -8887348726655877985LL);
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) var_2);
    var_29 = ((/* implicit */int) var_16);
}
