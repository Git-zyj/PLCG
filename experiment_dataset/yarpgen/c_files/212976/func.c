/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212976
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) -1011559968))) : ((-(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_15)), (var_13)))))) : (max((2669245670855581963ULL), (2669245670855581963ULL)))));
    var_19 -= ((/* implicit */short) ((unsigned long long int) var_11));
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_1 + 1] [i_0] [i_2] [1U] [i_1] = ((/* implicit */long long int) ((_Bool) ((int) ((((/* implicit */_Bool) 1914889154U)) ? (((/* implicit */int) var_8)) : (var_6)))));
                        var_21 ^= ((/* implicit */unsigned int) var_5);
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_0] |= ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 2669245670855581961ULL))))), (arr_5 [(signed char)0] [i_1] [i_3] [i_4])));
                            arr_13 [i_1] [i_1] [i_2] [i_3] [(short)19] = ((/* implicit */unsigned short) ((_Bool) max((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 3] [i_1 - 3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (7032018305975665093LL)))))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                        {
                            arr_17 [(signed char)5] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_1);
                            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_14 [16ULL] [i_0] [i_2] [16ULL] [i_5 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15777498402853969653ULL))))) : (((/* implicit */int) arr_16 [i_5] [i_5 + 1] [i_1 - 4]))))) ? (var_6) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2669245670855581949ULL)) ? (15777498402853969670ULL) : (((/* implicit */unsigned long long int) -8602837991706597945LL))))) ? (((((((/* implicit */int) var_9)) + (2147483647))) << (((((var_13) + (1915056339))) - (20))))) : (max((((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [4LL])), (var_6)))))));
                            arr_18 [i_2] [(signed char)11] [i_2] [i_3] [i_1] [8U] [i_5] = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((((unsigned int) ((long long int) arr_10 [i_3 - 1] [i_1] [i_0] [i_3] [i_3]))) >> ((((~(arr_3 [i_1] [i_3 - 2]))) - (12036360814866791564ULL)))))) : (((/* implicit */signed char) ((((unsigned int) ((long long int) arr_10 [i_3 - 1] [i_1] [i_0] [i_3] [i_3]))) >> ((((((~(arr_3 [i_1] [i_3 - 2]))) - (12036360814866791564ULL))) - (7224768146429220679ULL))))));
                            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (7768399846807593246ULL))) / (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned short)6)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)16067)))))))));
                        }
                        arr_19 [i_1] [(short)1] [i_1] = ((/* implicit */signed char) var_15);
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (var_13)))) ? (((/* implicit */int) ((158149290) < (((/* implicit */int) var_15))))) : (((var_15) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (unsigned char)255))))));
        var_24 = ((/* implicit */long long int) ((unsigned long long int) (~(var_13))));
        var_25 -= ((/* implicit */unsigned int) arr_14 [(unsigned short)16] [i_0] [i_0] [(unsigned short)16] [i_0]);
        arr_21 [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned long long int i_6 = 4; i_6 < 10; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (int i_8 = 2; i_8 < 10; i_8 += 2) 
            {
                {
                    var_26 &= ((/* implicit */short) ((unsigned char) 11436295402600381792ULL));
                    var_27 = ((/* implicit */unsigned char) ((int) ((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))));
                }
            } 
        } 
        var_28 += ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) var_10)), (min((arr_6 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) var_8)))))), (((/* implicit */unsigned int) ((signed char) (+(-1LL)))))));
    }
    for (short i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        arr_37 [i_9] [i_9] = ((unsigned int) var_15);
        arr_38 [i_9] [11] = ((/* implicit */unsigned long long int) max((((((_Bool) 2107452431U)) ? (var_1) : (arr_1 [i_9]))), (((/* implicit */long long int) max(((~(2187514863U))), (((/* implicit */unsigned int) ((int) var_6))))))));
        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
    }
}
