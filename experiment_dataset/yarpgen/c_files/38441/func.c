/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38441
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
    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)25)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) 3161177220U)), (-3430023815735236512LL))) <= (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-5528)), (arr_2 [i_0])))))))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */short) arr_1 [i_0] [i_0])))))) : ((~(arr_2 [i_0])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_1 - 2]);
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_1]))) >= (arr_0 [i_0] [i_1 - 2])));
            arr_7 [i_0] [i_1] [i_1] = (~(((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 3])));
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))) ? (((arr_0 [i_1] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned char)2]))))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)121)))));
            var_15 = ((/* implicit */unsigned int) ((arr_0 [i_1 - 1] [i_1 - 3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [(signed char)6] [i_0])), (5247161358534864887LL))))))) ^ (max((((-489011107) % (((/* implicit */int) arr_4 [i_0] [i_0])))), (((((/* implicit */_Bool) (unsigned short)26001)) ? (-489011095) : (((/* implicit */int) (unsigned short)46595))))))));
            var_17 = ((((/* implicit */_Bool) ((signed char) arr_2 [i_2 - 1]))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2 - 1]))) : (-3430023815735236522LL))) : (((/* implicit */long long int) (+(var_9)))));
        }
        for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)12)))) : (min((var_12), (((/* implicit */long long int) (_Bool)0)))))), (((/* implicit */long long int) var_5))));
            var_19 = ((/* implicit */short) ((min((var_12), (((/* implicit */long long int) ((_Bool) (unsigned char)242))))) | (((/* implicit */long long int) ((/* implicit */int) ((var_2) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -5896675265732693589LL)) ? (arr_2 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)72))))) : (var_9))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) arr_12 [i_5] [3ULL]);
            var_20 = ((/* implicit */unsigned short) ((short) (unsigned short)16262));
            arr_20 [i_4] [i_4] = ((/* implicit */signed char) ((arr_2 [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))));
        }
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (((/* implicit */int) arr_4 [i_6] [i_4])) : (((/* implicit */int) arr_4 [i_4] [i_4]))))) <= (arr_18 [i_6])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_26 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((9223372036854775796LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-28459)))))) && (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_12))))));
                arr_27 [i_4] [i_4] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_6])) ? (176728126980656356ULL) : (((/* implicit */unsigned long long int) arr_2 [(unsigned short)3])))) << (((((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (_Bool)1)))) - (214)))));
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    {
                        arr_32 [i_4] [6ULL] [i_8] [i_9] [i_4] [i_9] &= ((/* implicit */unsigned int) ((int) arr_29 [10LL] [i_9] [i_9] [i_9]));
                        arr_33 [i_4] [i_4] [i_8] [i_9] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 744157774)) ? (-1197078665) : (2147483647))));
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            arr_36 [i_10] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (-884738917) : (((/* implicit */int) arr_15 [i_4]))))))))));
            /* LoopNest 2 */
            for (unsigned short i_11 = 1; i_11 < 11; i_11 += 1) 
            {
                for (int i_12 = 1; i_12 < 11; i_12 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_41 [i_4] [i_4] [(unsigned char)9] [i_11] [i_12] [i_4])) << (((((((/* implicit */_Bool) 1048512U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_28 [i_4] [(unsigned short)0] [i_11])))) - (53))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_25 [5] [(unsigned char)3] [i_10])), (0ULL)))))))));
                        arr_43 [i_12] [i_11 + 2] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_2 [i_10 - 1])))) ? (((/* implicit */int) ((short) (short)-18690))) : (((884738917) >> (((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */int) var_10);
                    }
                } 
            } 
        }
    }
    var_24 -= ((/* implicit */signed char) var_12);
}
