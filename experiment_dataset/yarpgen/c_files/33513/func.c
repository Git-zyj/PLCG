/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33513
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)26009))) / ((~(4232712300U))))), (((/* implicit */unsigned int) min((arr_1 [i_0 + 1]), ((_Bool)1))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (((_Bool)0) && (((/* implicit */_Bool) 4486007441326080LL))));
                    arr_9 [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) max((((unsigned short) min((((/* implicit */long long int) arr_6 [i_0])), (4486007441326107LL)))), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)-26010)) < (((/* implicit */int) arr_5 [i_1] [(signed char)8]))))) == ((+(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) (unsigned char)247))))) : (((/* implicit */int) (unsigned short)29016))))));
        var_16 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */int) (unsigned char)0)) / ((+(((/* implicit */int) (_Bool)1))))))));
        arr_14 [i_3 + 2] [1ULL] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) != (arr_11 [i_3 + 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)0)))))) : ((((-(((/* implicit */int) (signed char)-54)))) ^ (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-32))))))));
        arr_15 [i_3 + 1] = ((/* implicit */long long int) min(((short)-16243), (((/* implicit */short) (_Bool)1))));
        arr_16 [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((short) arr_11 [i_3 - 1])));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 23; i_4 += 1) 
    {
        for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            {
                arr_21 [i_5 + 1] [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) arr_19 [i_4 - 1] [i_5 + 4])));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 1; i_6 < 24; i_6 += 1) 
                {
                    var_17 = ((/* implicit */short) 254313023U);
                    var_18 = ((/* implicit */_Bool) (signed char)-57);
                }
                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) (unsigned short)29016)), (0U)))))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 23; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_29 [i_4] [i_5 - 1] [i_7] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (signed char)110)) ? (6172193168851971172LL) : (((/* implicit */long long int) 3191562376U)))));
                            var_20 = (((-(((/* implicit */int) arr_28 [i_5 + 1] [i_5])))) / (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 1651919117)) <= (18446744073709551615ULL)))) <= (((((/* implicit */_Bool) 11249259227315378084ULL)) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) (short)-12956))))))));
                        }
                    } 
                } 
                arr_30 [(signed char)1] [i_5 + 4] [i_4 - 1] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_5 - 1] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)110)) && (((/* implicit */_Bool) (signed char)127)))))) : (((unsigned int) ((((/* implicit */_Bool) 561506668626569656ULL)) ? (((/* implicit */unsigned long long int) 1160736051U)) : (0ULL)))));
            }
        } 
    } 
}
