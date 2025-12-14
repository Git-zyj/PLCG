/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246761
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((int) 799261369922669696ULL));
            var_19 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) (unsigned short)8192))) : (((/* implicit */int) var_5)));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) (unsigned short)57343))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(var_3))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2268572088147884047LL)))) : (((var_15) << (((/* implicit */int) var_0))))));
                var_23 &= ((/* implicit */long long int) var_17);
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : ((-(var_16)))));
            }
            for (int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
            {
                arr_8 [i_0] [i_0] [6U] [i_0] = ((/* implicit */unsigned char) (short)-9068);
                var_25 = ((/* implicit */int) max((var_25), ((+(((/* implicit */int) (unsigned short)28239))))));
            }
            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-128)) ? (((/* implicit */int) (unsigned short)57343)) : (((/* implicit */int) (unsigned short)40725))))) ? (((/* implicit */unsigned int) (-(var_4)))) : (1386163705U))))));
                var_27 |= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 1825786136))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4399520364151668951LL)) ? (3813436221623657034LL) : (4399520364151668951LL)))) : (((var_14) >> (((((/* implicit */int) var_13)) - (45201)))))));
                arr_11 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */int) ((unsigned short) 2328065960436357864ULL));
            }
            var_28 = ((/* implicit */long long int) var_15);
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 8U)) ? (-568622518) : (((/* implicit */int) (short)-13729)))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_11)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 17; i_5 += 1) 
    {
        arr_15 [i_5] [(unsigned char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 9033467270637258180LL)))) ^ (((long long int) var_7))));
        var_29 -= ((/* implicit */unsigned char) var_10);
    }
    var_30 = ((/* implicit */unsigned int) ((long long int) var_1));
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_31 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-2268572088147884048LL) : (((/* implicit */long long int) -1825786136))))) ? (max((3268736343705267824LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        var_32 += ((/* implicit */int) min((var_8), (((/* implicit */long long int) var_17))));
        var_33 = ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)31068))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)39)))) : (((((/* implicit */_Bool) -1659680577)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))));
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13639)) ? (5000543692773374492LL) : (-3268736343705267822LL)));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] &= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_5)) % (-419721242))));
        var_35 = ((/* implicit */unsigned char) -1825786137);
        arr_25 [i_7] [i_7] = ((/* implicit */long long int) var_1);
        /* LoopSeq 3 */
        for (unsigned int i_8 = 1; i_8 < 10; i_8 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */int) 5000543692773374492LL);
            var_37 = ((/* implicit */unsigned short) var_2);
            arr_28 [i_8] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
        }
        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                arr_33 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5000543692773374473LL)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 4399520364151668927LL)) : (var_12))) : (((/* implicit */unsigned long long int) 2927743983892997418LL))));
                var_38 = ((/* implicit */_Bool) var_5);
                var_39 = ((/* implicit */int) var_1);
            }
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1825786136)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8)))) ? (1880999535883427585LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 5000543692773374473LL)) != (var_14)))))));
            arr_34 [i_7] [i_9] [i_9] = ((/* implicit */unsigned long long int) 3715254262353094308LL);
        }
        for (signed char i_11 = 1; i_11 < 7; i_11 += 4) 
        {
            arr_37 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2328065960436357854ULL)) ? (((/* implicit */long long int) -1374747251)) : (-3268736343705267849LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2328065960436357888ULL)))) : (((var_3) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
            var_41 ^= ((/* implicit */unsigned int) var_10);
            arr_38 [i_11] [(_Bool)1] = ((/* implicit */signed char) var_6);
            var_42 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 769295341U)) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) (_Bool)1))))));
        }
        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 17399178025700501269ULL)) ? (8165213195034418512LL) : (5324921267810987537LL)))))));
    }
    var_44 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8892197652282893824LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)128)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? ((+(8166516582908553968ULL))) : (((/* implicit */unsigned long long int) ((var_11) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)143))))))))));
}
