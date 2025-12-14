/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212001
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) var_6)) ? (((long long int) (~(4126827133235849867LL)))) : (((/* implicit */long long int) ((/* implicit */int) min((((short) (signed char)127)), (min((var_4), (((/* implicit */short) arr_1 [i_0] [(signed char)6])))))))));
                    var_16 = ((/* implicit */int) (-(4126827133235849855LL)));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */short) ((((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [9U] [5ULL] [9U] [i_2]))))) * (((-4126827133235849855LL) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [5LL] [i_2]))))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (~(3184228728U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [0U]))) : (arr_6 [i_0] [i_0 + 1] [i_1 - 2] [i_0]))))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_3]))));
                        var_19 = ((/* implicit */unsigned char) (~(((((arr_4 [i_0] [i_2]) % (((/* implicit */int) (signed char)(-127 - 1))))) | (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_1 - 3]))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (~(2037271488))))))))));
                        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (4126827133235849848LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23806)))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) 3095890749U)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) arr_8 [(signed char)5] [7ULL] [i_2] [i_2])))))) - (arr_4 [i_0] [i_2])));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_2] [i_0 + 2] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [(short)6])) : (((/* implicit */int) (signed char)-120))))) ? (8848413314854999822ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_2]))));
                            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [5ULL] [i_0] [i_0 - 1] [8ULL])) ? (arr_6 [5LL] [5LL] [i_0 + 2] [i_1]) : (arr_6 [i_0] [i_0] [i_0 + 2] [(_Bool)1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (1729382256910270464LL)))))));
                            var_25 = ((/* implicit */unsigned char) arr_1 [i_1 - 1] [i_0 - 2]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 += ((/* implicit */_Bool) min((((/* implicit */int) (short)-32375)), (-1613408431)));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) (unsigned short)9801)) ? (562949953421312ULL) : (0ULL))))))))));
                        }
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_2] [9ULL] [i_0] [9ULL]) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 4] [i_2] [i_4] [i_2]))) : (((arr_2 [i_0] [7U]) ? (((/* implicit */long long int) -25)) : (-1729382256910270465LL)))))) ? (-1LL) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_2] [(unsigned short)1])), (arr_9 [i_2] [(short)9])))) ? ((~(4126827133235849854LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_7] [(_Bool)1] [(signed char)2] [i_4] [(_Bool)1])) ? (((/* implicit */int) arr_3 [4U] [(_Bool)1] [i_4])) : (arr_19 [i_2] [(unsigned char)7]))))))));
                            arr_20 [i_0] [i_1] [i_2] [i_2] [i_7] [9U] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) -1485302730)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32386)) % (((/* implicit */int) (signed char)-18))))) : (((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1] [i_2] [(_Bool)1] [5])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-116))))) : (((arr_17 [3ULL] [i_4] [5LL] [i_1 + 1] [(_Bool)1]) ? (arr_6 [i_0 - 1] [i_0 + 1] [3] [i_0]) : (1644156379U))))));
                            arr_21 [i_0] [i_2] [i_2] [i_2] [i_7] [i_2] = ((((((/* implicit */_Bool) (unsigned short)55758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-7550)))) : (((((/* implicit */_Bool) arr_13 [(unsigned char)9] [i_1] [(unsigned char)9] [i_4] [i_7])) ? (6525650543489345886ULL) : (((/* implicit */unsigned long long int) -1321718328)))))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 2] [i_1 - 3]))))));
                            arr_22 [i_2] [i_2] [(unsigned char)9] [i_4] [(short)7] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-7550)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4126827133235849850LL)) ? (((/* implicit */int) arr_3 [0] [i_4] [i_7])) : (((/* implicit */int) arr_8 [i_1] [(unsigned short)7] [(unsigned short)7] [i_2]))))))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_1] [(unsigned short)9]))) + (((((/* implicit */_Bool) 8616479705236081406LL)) ? (866257696808937383LL) : (-5LL))))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (~(((((/* implicit */_Bool) 1649732215855044892LL)) ? (((/* implicit */int) (unsigned short)44806)) : (-64112115))))))));
                        }
                        arr_23 [i_2] = arr_1 [i_1] [i_2];
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */long long int) var_3);
    var_31 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (signed char i_10 = 1; i_10 < 8; i_10 += 1) 
            {
                {
                    var_32 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_10 - 1] [i_9] [i_10] [i_10 + 2] [i_10 - 1]))));
                    arr_32 [i_8] [4ULL] [i_8] [i_10] = (~(((/* implicit */int) (!(arr_25 [i_8])))));
                    var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-14))));
                }
            } 
        } 
        var_34 += ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_8] [i_8]))));
        arr_33 [i_8] [i_8] = ((/* implicit */int) ((arr_8 [(unsigned char)8] [(unsigned char)8] [i_8] [(unsigned char)6]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8] [6U] [i_8] [i_8] [i_8]))) : (((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7557))) : (arr_7 [(_Bool)1] [i_8] [i_8] [i_8])))));
        arr_34 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [0] [i_8] [i_8] [0])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_14 [(short)9] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8])))))) : (arr_9 [(_Bool)1] [i_8])));
    }
    var_35 += ((/* implicit */long long int) var_4);
}
