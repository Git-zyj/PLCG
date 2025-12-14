/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34520
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
    var_17 = var_12;
    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) 11039268399507425488ULL));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [7] [i_0] [11U] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((((int) ((signed char) arr_2 [15LL] [(signed char)5]))) + (65)))));
                    arr_9 [i_0] [i_0] [15ULL] [15ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [15U])) ? (((/* implicit */long long int) 2678090379U)) : (arr_7 [(unsigned char)0] [(unsigned char)0] [i_0])))) ? ((~(144115188075724800ULL))) : (((/* implicit */unsigned long long int) ((arr_7 [4LL] [20LL] [i_0]) - (4611686016279904256LL))))))) ? (14792009602547124927ULL) : (((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */int) (short)18426)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) 11039268399507425509ULL);
                                var_20 += ((/* implicit */short) 7407475674202126130ULL);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((signed char) 11039268399507425479ULL));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(min((var_14), (((/* implicit */unsigned int) arr_1 [i_5] [i_5]))))))) == (((long long int) (~(arr_0 [13U]))))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 4; i_7 < 11; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        arr_25 [7ULL] [(signed char)3] [7ULL] [7ULL] = ((/* implicit */unsigned char) ((max((arr_20 [i_8]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (~(3642695047U))))))));
                        arr_26 [7LL] [7LL] [(unsigned char)5] [(unsigned short)0] [3U] = (~(((/* implicit */int) ((((/* implicit */int) var_13)) <= ((~(((/* implicit */int) (_Bool)0))))))));
                        arr_27 [5ULL] [1] [1] [1] = ((/* implicit */unsigned char) (~(max((arr_18 [i_5] [14]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)128)))))))));
                    }
                    arr_28 [i_5] [4LL] [4LL] [2] = ((/* implicit */unsigned long long int) var_0);
                    arr_29 [(signed char)10] [(signed char)10] [3] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((max((6470446613703548286LL), (-957218168664582745LL))) - (((/* implicit */long long int) var_4))))));
                    var_23 += ((/* implicit */unsigned char) (~(var_1)));
                }
                var_24 -= (~(((/* implicit */int) var_5)));
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 6470446613703548280LL)) ? (((/* implicit */unsigned long long int) (~(6448607801065779602LL)))) : ((~(11039268399507425493ULL)))))))));
            }
        } 
    } 
}
