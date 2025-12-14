/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212450
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
    var_19 = ((/* implicit */short) 12444183382176518832ULL);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-(((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) & (var_11))))))));
                        var_21 ^= ((-20LL) & (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (unsigned char)81)), (4269183310U)))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+((((~(9120807357669897064LL))) ^ (((((/* implicit */long long int) 4294967275U)) | (-1254917554104850485LL))))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) 1495993720486579376LL);
        arr_11 [(unsigned char)3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)60614))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            {
                var_24 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_10 [i_4] [i_5])))))))));
                var_26 = ((/* implicit */unsigned short) ((_Bool) -1542586340201306190LL));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_11))));
    /* LoopSeq 2 */
    for (unsigned int i_6 = 2; i_6 < 12; i_6 += 4) 
    {
        var_28 |= max((((/* implicit */unsigned short) (signed char)24)), ((unsigned short)44994));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_7 = 4; i_7 < 13; i_7 += 3) 
        {
            arr_22 [i_6] [(unsigned short)6] [(signed char)13] = ((/* implicit */long long int) (~(arr_1 [i_6 + 2])));
            arr_23 [i_6] [i_7] = (-((+(arr_9 [i_6] [i_7 - 2] [i_6 - 2] [i_6 - 2]))));
            arr_24 [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) % (((/* implicit */int) arr_18 [i_7 + 1] [i_7]))));
            var_29 = ((/* implicit */signed char) (~(((unsigned long long int) (unsigned short)55389))));
            arr_25 [12U] = ((/* implicit */long long int) ((((arr_1 [(unsigned short)1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (arr_3 [i_6] [i_6])));
        }
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-13472))))))))))));
            var_31 = ((/* implicit */long long int) (signed char)24);
        }
        for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_32 = ((/* implicit */unsigned char) ((((max((1254209692048991198LL), (((/* implicit */long long int) var_6)))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29779))))) / (((long long int) arr_15 [i_9]))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9]))) * ((+((+(4294967275U)))))));
        }
    }
    for (short i_10 = 1; i_10 < 22; i_10 += 1) 
    {
        var_34 = ((/* implicit */signed char) (+(max((((-1882496456363675367LL) ^ (644542870033129342LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_34 [i_10 + 1] [i_10 - 1])))) + (2147483647))) >> (((/* implicit */int) arr_34 [i_10 + 1] [i_10 + 2])))))));
            /* LoopNest 2 */
            for (long long int i_12 = 3; i_12 < 23; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    {
                        arr_40 [(unsigned short)22] [i_12] [i_13] = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_10 + 2] [i_10 + 2] [2U] [2U])) & (((/* implicit */int) (signed char)11))))), (((arr_39 [i_10] [i_10] [i_10] [i_10] [i_10]) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))))) | (((long long int) 4026531840U))));
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((long long int) (-(2619134936U)))) == ((~(1254209692048991187LL))))))));
                        var_37 -= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        var_38 = var_8;
                    }
                } 
            } 
        }
        for (short i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */long long int) (((-((+(4294443008ULL))))) << (min((((/* implicit */long long int) (signed char)28)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)508))) ^ (478812982400723LL)))))));
            /* LoopNest 2 */
            for (long long int i_15 = 1; i_15 < 22; i_15 += 1) 
            {
                for (long long int i_16 = 4; i_16 < 21; i_16 += 3) 
                {
                    {
                        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) (~((((-(((/* implicit */int) (short)24888)))) - ((~(((/* implicit */int) arr_45 [6LL] [6LL] [(unsigned char)6] [(signed char)0] [i_16])))))))))));
                        var_41 = ((/* implicit */unsigned int) 1254917554104850484LL);
                        var_42 += ((/* implicit */unsigned int) var_3);
                    }
                } 
            } 
        }
    }
}
