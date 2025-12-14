/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244315
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
    var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 6099821310237312245ULL)))), (((((/* implicit */unsigned long long int) var_4)) != (((((/* implicit */_Bool) 12346922763472239349ULL)) ? (6099821310237312256ULL) : (2612302850885072792ULL)))))));
    var_18 = ((/* implicit */short) var_10);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (((~(arr_2 [i_0]))) < (((/* implicit */int) arr_0 [i_0]))));
        var_20 = ((/* implicit */unsigned long long int) ((short) 6099821310237312260ULL));
        var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)53)) << (((((/* implicit */int) var_1)) - (245)))))) ? (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) arr_0 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))) | (13183849522325671504ULL))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) 6099821310237312248ULL);
    }
    for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_1 [i_1])));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_2 + 3] [i_2] [i_3] = ((/* implicit */unsigned short) 7756525772119443806ULL);
                    var_23 += ((/* implicit */short) (-(((/* implicit */int) (signed char)58))));
                    var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 5262894551383880111ULL)) ? (12346922763472239318ULL) : (268435455ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 5ULL)) ? (((unsigned long long int) 264241152)) : (((/* implicit */unsigned long long int) var_16))))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29853)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44199))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((arr_14 [i_4]) << (((((/* implicit */int) var_1)) - (250))))) : (((/* implicit */long long int) max((((/* implicit */int) (short)1023)), (-37183393))))));
        arr_16 [i_4] [i_4] = ((/* implicit */int) arr_6 [6LL] [(signed char)2]);
        var_27 = ((/* implicit */unsigned short) var_2);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) ((((var_16) + (2147483647))) >> (((6099821310237312256ULL) - (6099821310237312230ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 4; i_6 < 17; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) -1)) ? (17936302289561913290ULL) : (17936302289561913299ULL))) : (arr_18 [i_6])));
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (~(arr_21 [i_6 + 4] [i_6 + 4] [i_7]))))));
                    arr_25 [16ULL] [i_6] [i_7] = ((/* implicit */signed char) (~(var_12)));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) / (arr_23 [i_5] [i_5] [i_7])));
                    arr_26 [(signed char)9] [(signed char)9] [i_7] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (short)1024))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (((+(var_14))) ^ (((/* implicit */unsigned long long int) -3)))))));
    }
    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 13047913064648335440ULL))));
    var_33 = ((/* implicit */unsigned short) max((((8568716068207202926ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))))), (((/* implicit */unsigned long long int) var_4))));
}
