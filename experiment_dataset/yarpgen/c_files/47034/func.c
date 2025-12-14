/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47034
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
    var_12 = var_0;
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_5)) ? (143155217466676385LL) : (((/* implicit */long long int) 3775959005U))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), ((signed char)-87)));
            arr_6 [3ULL] [i_1] = -143155217466676397LL;
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [5])) << (((((/* implicit */int) arr_1 [i_2])) - (64)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_8 [i_0] [(signed char)2]))))))));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((short) (signed char)92)))));
            var_17 = ((/* implicit */long long int) ((unsigned long long int) arr_0 [i_0]));
        }
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_8))));
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))) != (7651461967809865022LL))))) >= (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_3] [i_3]))) : (1695342614377946LL))))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_20 ^= ((/* implicit */signed char) ((-143155217466676393LL) >= (((/* implicit */long long int) ((-102414625) | (((/* implicit */int) (short)-622)))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (4294967292U)));
                var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_9)), (max((((/* implicit */unsigned int) (short)-25961)), (3U)))));
                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((((int) (signed char)(-127 - 1))) * ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((signed char) -383450269))) : (((((/* implicit */int) ((((/* implicit */int) (short)22665)) <= (-1530364083)))) * (((/* implicit */int) ((unsigned short) (unsigned char)127)))))))));
            }
            var_24 -= ((/* implicit */short) var_6);
            var_25 = ((/* implicit */short) 1U);
        }
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            arr_17 [i_5] [(unsigned char)7] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_4 [i_0]) & (((/* implicit */long long int) 12U)))))))), (((((9088449090519147739LL) - (((/* implicit */long long int) 786432)))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
            var_26 = ((unsigned char) 742357248U);
        }
        var_27 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_5 [i_0]), (arr_5 [i_0]))))));
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) (-(arr_19 [i_6] [i_6])));
        var_29 &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_15 [i_6] [i_6])) == (((/* implicit */int) var_2)))))));
    }
    var_30 = ((/* implicit */long long int) (unsigned char)63);
}
