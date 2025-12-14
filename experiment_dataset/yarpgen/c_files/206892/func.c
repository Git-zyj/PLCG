/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206892
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
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) 384462090U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (1979034313U))) > (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_21 &= ((/* implicit */short) arr_1 [i_0]);
        var_22 = ((/* implicit */_Bool) 4004210868U);
    }
    /* LoopSeq 4 */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 6363341223440034672ULL)))) ? (arr_1 [i_1]) : (((((/* implicit */_Bool) var_9)) ? (11599148397827935743ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)5]))))))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)65535)), (5129995374547036459LL))))));
        var_23 = ((/* implicit */signed char) max((var_23), (arr_3 [i_1] [8])));
        arr_5 [i_1] = ((/* implicit */unsigned char) 12355503235524422422ULL);
    }
    for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        var_24 &= ((/* implicit */signed char) ((unsigned char) 2217476729123765680LL));
        var_25 += ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_2 + 1]));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) arr_8 [i_2] [i_2])), ((short)32746)))) >> (((((((/* implicit */int) var_17)) << (((910548181) - (910548172))))) - (492)))))) ? (((/* implicit */long long int) arr_6 [i_2 + 1])) : (min((((/* implicit */long long int) 4294967295U)), (max((-5942407893251119003LL), (((/* implicit */long long int) (_Bool)1))))))));
            var_27 = ((/* implicit */unsigned char) (((-(3976658168U))) >> ((((~(((/* implicit */int) var_11)))) + (7)))));
            var_28 = ((/* implicit */signed char) (unsigned char)86);
        }
        /* LoopSeq 3 */
        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_2 + 1])) && (((/* implicit */_Bool) arr_0 [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_2 + 2])) : (((/* implicit */int) arr_0 [i_2 + 2]))))) : (((unsigned int) arr_0 [(unsigned char)4]))));
            var_30 ^= ((/* implicit */unsigned long long int) max((235417268U), (((/* implicit */unsigned int) (_Bool)1))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) arr_8 [i_2 + 3] [16LL]))));
            var_32 = ((/* implicit */signed char) (~(((/* implicit */int) (short)(-32767 - 1)))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) 
        {
            var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2 - 1] [(signed char)11])) || (((/* implicit */_Bool) arr_11 [i_2 + 1] [16ULL]))));
            arr_18 [i_2] [i_2] [i_2] = ((/* implicit */short) (~((+(((/* implicit */int) (short)-1))))));
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */unsigned long long int) arr_6 [i_2 - 1])) : (var_2)));
        }
    }
    for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        var_35 &= ((/* implicit */long long int) (unsigned short)65535);
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(var_10))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) arr_20 [i_7])) : (((/* implicit */int) arr_17 [i_7])))))))) ? (max((min((6620993239979507762ULL), (16939702670803609926ULL))), (((((/* implicit */unsigned long long int) 4194304U)) % (arr_7 [(short)18]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_37 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_8])) >> (((((/* implicit */int) (unsigned char)255)) - (250)))));
        arr_24 [i_8] [15LL] = ((/* implicit */unsigned int) 10432765295681364885ULL);
        var_38 = ((/* implicit */_Bool) ((((/* implicit */int) (short)22073)) % (((/* implicit */int) arr_23 [i_8]))));
        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (+(var_10))))));
    }
}
